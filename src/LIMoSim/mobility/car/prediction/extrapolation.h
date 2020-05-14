#ifndef LIMOSIM_EXTRAPOLATION_H
#define LIMOSIM_EXTRAPOLATION_H

#include "prediction.h"

namespace LIMoSim
{

class Extrapolation : public Prediction
{
public:
    Extrapolation(Car *_car);

    Vector3d predict(double _horizon);
};

}

#endif // LIMOSIM_EXTRAPOLATION_H
