#ifndef LIMOSIM_SIMULATION_H
#define LIMOSIM_SIMULATION_H

#include "eventscheduler.h"

namespace LIMoSim
{

class Simulation
{
public:
    Simulation(EventScheduler *_scheduler = 0);
    ~Simulation();

    static Simulation* getInstance(EventScheduler *_scheduler = 0);

    // simulation control
    void run();
    void step();
    void stop();
    double getSimTime();

    // temporal efficiency
    void updateTimeReference();
    double getTimestamp();

    //
    EventScheduler* getEventScheduler();

private:
    EventScheduler *p_scheduler;

    double m_timeReference;
};

}

#endif // LIMOSIM_SIMULATION_H
