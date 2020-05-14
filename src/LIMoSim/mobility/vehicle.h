#ifndef LIMOSIM_VEHICLE_H
#define LIMOSIM_VEHICLE_H

#include "LIMoSim/simulation/eventhandler.h"
#include "LIMoSim/world/vector3d.h"

namespace LIMoSim
{

class Vehicle : public EventHandler
{
public:
    Vehicle(const std::string &_id, const std::string &_type);
    virtual ~Vehicle();

    //
    void setPosition(const Vector3d &_position);
    void setOrientation(const Vector3d &_orientation);
    std::string getId();
    std::string getType();
    Vector3d getPosition();
    Vector3d getOrientation();


public:
    void initialize();
    void handleEvent(Event *_event);
    virtual void move(double _timeDelta_s) = 0;

protected:
    std::string m_id;
    std::string m_type;

    Vector3d m_position; // x,y,z
    Vector3d m_orientation; // pitch,roll,yaw

    Event *m_updateTimer;
    double m_updateInterval_s;
    double m_lastUpdate_s;

};

}

#endif // LIMOSIM_VEHICLE_H
