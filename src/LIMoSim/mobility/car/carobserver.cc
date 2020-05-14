#include "carobserver.h"
#include "car.h"

namespace LIMoSim
{

CarObserver::CarObserver(Car *_car) :
    p_car(_car)
{
    p_car->addObserver(this);
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/


/*************************************
 *           PRIVATE METHODS         *
 ************************************/

}
