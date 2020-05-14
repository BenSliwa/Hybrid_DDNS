#include "sil.h"

namespace LIMoSim
{


SIL::SIL(Car *_car) :
    Prediction(_car),
    m_interval_s(0.1)
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

Vector3d SIL::predict(double _horizon)
{
    RoadPosition roadPosition  = p_car->getRoadPosition();

    int steps = _horizon/m_interval_s;
    for(int i=0; i<steps; i++)
        p_car->move(m_interval_s);

    Vector3d prediction = p_car->getPosition();
    p_car->setRoadPosition(roadPosition);

    return prediction;
}

}
