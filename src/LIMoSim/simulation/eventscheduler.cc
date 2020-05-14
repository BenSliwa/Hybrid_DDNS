#include "eventscheduler.h"
#include <ctime>

namespace LIMoSim
{

EventScheduler::EventScheduler() :
    m_state(SIM_STATE::STOPPED),
    m_eventCount(0)
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void EventScheduler::run()
{

}

void EventScheduler::step()
{

}

void EventScheduler::stop()
{

}

double EventScheduler::getSimTime()
{
    return 0;
}

int EventScheduler::getState()
{
    return m_state;
}


}
