#ifndef LIMOSIM_UAV_H
#define LIMOSIM_UAV_H

#include "LIMoSim/mobility/vehicle.h"

namespace LIMoSim
{

class UAV : public Vehicle
{
public:
    UAV(const std::string &_id);


    void setInitialPosition(const Vector3d &_position);


protected:
    void initialize();
    void handleEvent(Event *_event);
    void move(double _timeDelta_s);



private:
    Vector3d m_initialPosition;
};

}

#endif // LIMOSIM_UAV_H
