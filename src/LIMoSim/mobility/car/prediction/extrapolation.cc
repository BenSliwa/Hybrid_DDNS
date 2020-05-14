#include "extrapolation.h"

namespace LIMoSim
{


Extrapolation::Extrapolation(Car *_car) :
    Prediction(_car)
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

Vector3d Extrapolation::predict(double _horizon)
{
    Vector3d position = p_car->getPosition();
    Vector3d orientation = p_car->getOrientation();
    double speed_mps = p_car->getSpeed();
    double distance_m = _horizon * speed_mps;

    Vector3d prediction = position + Vector3d::fromSphere(90, orientation.z, distance_m);

    return prediction;
}


}
