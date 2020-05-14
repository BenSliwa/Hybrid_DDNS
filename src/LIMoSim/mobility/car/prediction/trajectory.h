#ifndef LIMOSIM_TRAJECTORY_H
#define LIMOSIM_TRAJECTORY_H

#include "prediction.h"

namespace LIMoSim
{

class Trajectory : public Prediction
{
public:
    Trajectory(Car *_car);

    Vector3d predict(double _horizon);
};

}

#endif // LIMOSIM_TRAJECTORY_H
