#include "uav.h"

namespace LIMoSim
{

UAV::UAV(const std::string &_id) :
    Vehicle(_id, "UAV")
{
    initialize();
}


/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void UAV::setInitialPosition(const Vector3d &_position)
{
    m_initialPosition = _position;
}


/*************************************
 *          PROTECTED METHODS        *
 ************************************/

void UAV::initialize()
{
    Vehicle::initialize();
}

void UAV::handleEvent(Event *_event)
{
    Vehicle::handleEvent(_event);

}

void UAV::move(double _timeDelta_s)
{
    m_orientation.z += 1;
    m_position = m_initialPosition + Vector3d::fromSphere(90, m_orientation.z, 200);
}

}
