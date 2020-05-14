#ifndef LIMOSIM_PREDICTION_H
#define LIMOSIM_PREDICTION_H

#include "LIMoSim/mobility/car/car.h"

namespace LIMoSim
{

class Prediction
{
public:
    Prediction(Car *_car);

protected:
    Car *p_car;
};

}

#endif // LIMOSIM_PREDICTION_H
