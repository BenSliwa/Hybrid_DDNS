#include "vehicle.h"

namespace LIMoSim
{

Vehicle::Vehicle(const std::string &_id, const std::string &_type) :
    EventHandler(),
    m_id(_id),
    m_type(_type),
    m_lastUpdate_s(0),
    m_updateInterval_s(0.1)
{

}

Vehicle::~Vehicle()
{
    deleteEvent(m_updateTimer);
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void Vehicle::setPosition(const Vector3d &_position)
{
    m_position = _position;
}

void Vehicle::setOrientation(const Vector3d &_orientation)
{
    m_orientation = _orientation;
}

std::string Vehicle::getId()
{
    return m_id;
}

std::string Vehicle::getType()
{
    return m_type;
}

Vector3d Vehicle::getPosition()
{
    return m_position;
}

Vector3d Vehicle::getOrientation()
{
    return m_orientation;
}

void Vehicle::initialize()
{
    m_updateTimer = new Event(m_updateInterval_s, this);
    scheduleEvent(m_updateTimer);
}

void Vehicle::handleEvent(Event *_event)
{
    double timeDelta_s = _event->getTimestamp() - m_lastUpdate_s;
    move(timeDelta_s);
    m_lastUpdate_s = _event->getTimestamp();

    //
    scheduleEvent(_event, m_updateInterval_s);
}

}
