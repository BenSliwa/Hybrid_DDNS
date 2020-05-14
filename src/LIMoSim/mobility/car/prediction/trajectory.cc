#include "trajectory.h"

namespace LIMoSim
{

Trajectory::Trajectory(Car *_car) :
    Prediction(_car)
{

}


/*************************************
 *            PUBLIC METHODS         *
 ************************************/

Vector3d Trajectory::predict(double _horizon)
{
    Vector3d position = p_car->getPosition();

    RoadPosition rp = p_car->getRoadPosition();
    Vector3d prediction = position;
    for(int i=0; i<rp.path.size(); i++)
    {
                // TODO
    }

    return prediction;
}



}
