#ifndef GPR_H
#define GPR_H

#include "LIMoSim/world/vector3d.h"
#include <map>
#include <vector>

namespace LIMoSim
{

class GPR
{
public:
    GPR();

    void init(const std::string &_mno, const std::string &_direction);
    Vector3d getCI(double _x);
    double limit(double _value);

private:
    std::vector<Vector3d> m_data;
    double m_min;
    double m_max;
};

}

#endif // GPR_H
