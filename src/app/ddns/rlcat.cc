#include "rlcat.h"
#include <math.h>
#include <iostream>
#include <sstream>
#include "LIMoSim/settings/filehandler.h"
#include "LIMoSim/settings/parser.h"
#include "cat.h"

namespace LIMoSim
{

RLCAT::RLCAT()
{

}


/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void RLCAT::init(const std::string &_mno, const std::string &_direction)
{
    std::string key = "rl_cat_qTable_" + _mno + "_" + _direction + ".csv";
    loadTable(key);
}


void RLCAT::loadTable(const std::string &_file)
{
    std::vector<std::string> lines = FileHandler::read(_file);
    for(unsigned int i=1; i<lines.size(); i++)
    {
        std::vector<std::string> line = Parser::split(lines.at(i), ",");
        if(line.size()==5)
        {
            std::stringstream stream;
            stream << atoi(line[0].c_str()) << "," << atoi(line[1].c_str()) << "," << atoi(line[2].c_str());
            std::string key = stream.str();

            if(m_qTable.count(key)==0)
            {
                m_qTable[key].push_back(atof(line[3].c_str()));
                m_qTable[key].push_back(atof(line[4].c_str()));
            }
            else
            {
                m_qTable[key][ACTION::IDLE] = atof(line[3].c_str());
                m_qTable[key][ACTION::TRANSMIT] = atof(line[4].c_str());
            }

        }
    }

}

std::string RLCAT::getStateKey(double _deltaT_s, double _prediction, double _prediction_tau, Policy *_policy)
{
    std::stringstream stream;

    int k0 = 0;
    if(_deltaT_s<40)
        k0 = 0;
    else if(_deltaT_s<80)
        k0 = 1;
    else if(_deltaT_s<120)
        k0 = 2;
    else
        k0 = 3;

    int k1 = (int)_prediction;
    if(k1>_policy->metricMax)
        k1 = _policy->metricMax;

    int k2 = (int)_prediction_tau;
    if(k2>_policy->metricMax)
        k2 = _policy->metricMax;

    stream << k0 << "," << k1 << "," << k2;

    return stream.str();
}

double RLCAT::getQValue(const std::string &_state, int _action)
{
    if(m_qTable.count(_state)==0)
    {
        std::cout << "RLCAT::getQValue state not found " << _action << std::endl;
        return 0;
    }
    return m_qTable[_state][_action];
}



/*************************************
 *           PRIVATE METHODS         *
 ************************************/


}
