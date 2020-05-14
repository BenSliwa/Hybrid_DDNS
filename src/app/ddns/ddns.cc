#include "ddns.h"

#include "LIMoSim/settings/filehandler.h"
#include "LIMoSim/settings/parser.h"
#include "math.h"
#include <QDebug>

namespace LIMoSim
{

DDNS::DDNS() :
    m_cellWidth_m(25)
{


}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

DDNS* DDNS::getInstance()
{
    static DDNS instance;
    return &instance;
}

void DDNS::init(const std::string &_mno)
{
    // load connectivity map
    std::vector<std::string> lines = FileHandler::read("ddns/cm/cm_" + _mno + "_southWest.csv");
    for(unsigned int i=1; i<lines.size(); i++)
    {
        std::vector<std::string> items = Parser::split(lines.at(i), ",");
        CMEntry entry;

        std::vector<std::string> key = Parser::split(items.at(0), ":");
        if(key.size()==2)
        {
            entry.isValid = true;
            entry.x = atoi(key.at(1).c_str()) * m_cellWidth_m;
            entry.y = atoi(key.at(0).c_str()) * m_cellWidth_m;

            entry.rsrp = atof(items.at(1).c_str());
            entry.rsrq = atof(items.at(2).c_str());
            entry.sinr = atof(items.at(3).c_str());
            entry.cqi = atof(items.at(4).c_str());
            entry.ta = atof(items.at(5).c_str());
            entry.velocity = atof(items.at(6).c_str());
            entry.cellId = atof(items.at(7).c_str());
            entry.f = atof(items.at(8).c_str());

            entry.eNB = items.at(7).c_str();

            m_entries[items.at(0)] = entry;
        }
    }

    m_gpr_ul.init(_mno, "ul");
    m_gpr_dl.init(_mno, "dl");
}

CMEntry DDNS::getEntry(const Vector3d &_position)
{
    CMEntry entry;
    entry.isValid = false;

    std::string key = computeCellKey(_position);
    if(m_entries.count(key)>0)
        entry = m_entries[key];

    return entry;
}

std::string DDNS::computeCellKey(const Vector3d &_position)
{
    std::stringstream stream;
    stream << (int)(_position.y/m_cellWidth_m) << ":" << (int)(_position.x/m_cellWidth_m);

    return stream.str();
}

std::map<std::string, CMEntry> DDNS::getEntries()
{
    return m_entries;
}

double DDNS::getCellWidth()
{
    return m_cellWidth_m;
}

double DDNS::normRnd(double _mu, double _sigma)
{
    static double n2 = 0.0;
    static int n2_cached = 0;
    if (!n2_cached)
    {
        double x, y, r;
        do
        {
            x = 2.0*rand()/RAND_MAX - 1;
            y = 2.0*rand()/RAND_MAX - 1;

            r = x*x + y*y;
        }
        while (r == 0.0 || r > 1.0);
        {
            double d = sqrt(-2.0*log(r)/r);
            double n1 = x*d;
            n2 = y*d;
            double result = n1*_sigma + _mu;
            n2_cached = 1;
            return result;
        }
    }
    else
    {
        n2_cached = 0;
        return n2*_sigma + _mu;
    }
}

double DDNS::sample(double _prediction, const std::string &_direction)
{
    Vector3d gprEntry;
    if(_direction=="ul")
        gprEntry= m_gpr_ul.getCI(_prediction);
    else if(_direction=="dl")
        gprEntry= m_gpr_dl.getCI(_prediction);

    double mu = gprEntry.x;
    double sigma = gprEntry.y;
    double sample = normRnd(mu, sigma);

    double result = m_gpr_ul.limit(sample);
    if(_direction=="dl")
        m_gpr_dl.limit(sample);

    return result;
}


}
