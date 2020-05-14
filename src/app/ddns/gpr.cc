#include "gpr.h"
#include "settings/filehandler.h"
#include <iostream>
#include "settings/parser.h"

namespace LIMoSim
{

GPR::GPR()
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void GPR::init(const std::string &_mno, const std::string &_direction)
{
    m_data.clear();
    std::vector<std::string> lines = FileHandler::read("ddns/gpr/gpr_" + _mno + "_" + _direction + ".txt");
    for(unsigned int i=0; i<lines.size(); i++)
    {
        std::vector<std::string> line = Parser::split(lines.at(i), ",");
        if(line.size()>1)
        {
            if(i==0)
            {
                m_min = atof(line.at(0).c_str());
                m_max = atof(line.at(1).c_str());
            }
            else
            {
                Vector3d values(atof(line.at(0).c_str()), atof(line.at(1).c_str()), atof(line.at(2).c_str()));
                m_data.push_back(values);
            }
        }
    }
}

Vector3d GPR::getCI(double _x)
{
    int s = m_data.size();
    for(int i=0; i<s; i++)
    {
        double current = m_data.at(i).x;

        Vector3d result(m_data.at(i).y, m_data.at(i).z);
        if(i==0)
        {
            if(current>=_x)
                return result;
        }
        else if(i<s-1)
        {
            if(current>=_x)
                return result;
        }
        else
        {
            if(current<=_x)
                return result;
        }
    }
}


double GPR::limit(double _value)
{
    double value = _value;
    if(value<m_min)
        value = m_min;
    if(value>m_max)
        value = m_max;

    return value;
}

}
