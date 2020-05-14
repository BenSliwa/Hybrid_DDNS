#ifndef LIMOSIM_CATVEHICLE_H
#define LIMOSIM_CATVEHICLE_H

#include "cat.h"
#include "LIMoSim/mobility/car/car.h"
#include "LIMoSim/mobility/car/carobserver.h"

namespace LIMoSim
{

class CATVehicle : public CAT, public CarObserver
{
public:
    CATVehicle(Car *_car, const Policy &_policy, const std::string _mno, const std::string &_direction);

    void handleNodeReached(Node *_node);

protected:

};

}

#endif // LIMOSIM_CATVEHICLE_H
