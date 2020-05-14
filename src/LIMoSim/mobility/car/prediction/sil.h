#ifndef LIMOSIM_SIL_H
#define LIMOSIM_SIL_H

#include "prediction.h"

namespace LIMoSim
{

class SIL : public Prediction
{
public:
    SIL(Car *_car);

    Vector3d predict(double _horizon);


private:
    double m_interval_s;
};


}


#endif // LIMOSIM_SIL_H
