#include "simulation.h"
#include <time.h>

namespace LIMoSim
{

Simulation::Simulation(EventScheduler *_scheduler) :
    p_scheduler(_scheduler),
    m_timeReference(0)
{

}

Simulation::~Simulation()
{

}

Simulation* Simulation::getInstance(EventScheduler *_scheduler)
{
    static Simulation instance(_scheduler);
    return &instance;
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void Simulation::run()
{
    if(m_timeReference==0)
        updateTimeReference();

    p_scheduler->run();
}

void Simulation::step()
{
    p_scheduler->step();
}

void Simulation::stop()
{
    p_scheduler->stop();
}

double Simulation::getSimTime()
{
    return p_scheduler->getSimTime();
}

void Simulation::updateTimeReference()
{
    m_timeReference = ((double)clock())/CLOCKS_PER_SEC;
}

double Simulation::getTimestamp()
{
    return ((double)clock())/CLOCKS_PER_SEC - m_timeReference;
}

EventScheduler* Simulation::getEventScheduler()
{
    return p_scheduler;
}

}
