#include "standaloneeventscheduler.h"

namespace LIMoSim
{

StandaloneEventScheduler::StandaloneEventScheduler(bool _runHeadless) :
    EventScheduler(),
    m_runHeadless(_runHeadless)
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void StandaloneEventScheduler::scheduleEvent(Event *_event)
{
    double timestamp_s = _event->getTimestamp();
    int index = m_eventQueue.size();
    for(unsigned int i=0; i<m_eventQueue.size(); i++)
    {
        Event *event = m_eventQueue.at(i);
        if(event->getTimestamp()>timestamp_s)
        {
            index = i;
            break;
        }
    }

    m_eventQueue.insert(m_eventQueue.begin()+index, _event);
}

void StandaloneEventScheduler::cancelEvent(Event *_event)
{

}

void StandaloneEventScheduler::deleteEvent(Event *_event)
{
    cancelEvent(_event);
    delete _event;
}

/*************************************
 *          SIMULATION CONTROL       *
 ************************************/

void StandaloneEventScheduler::run()
{
    if(m_state!=SIM_STATE::RUNNING)
    {
        m_state = SIM_STATE::RUNNING;
        handleNextEvent();
    }
}

void StandaloneEventScheduler::step()
{
    m_state = SIM_STATE::STOPPED;
    handleNextEvent();
}

void StandaloneEventScheduler::stop()
{
    m_state = SIM_STATE::STOPPED;
}

double StandaloneEventScheduler::getSimTime()
{
    return m_simTime_s;
}

void StandaloneEventScheduler::handleNextEvent()
{
    if(m_eventQueue.size()>0)
    {
        Event *event = m_eventQueue.at(0);
        m_eventQueue.pop_front();

        m_eventCount++;
        m_simTime_s = event->getTimestamp();

        event->handle();
    }


    if(m_eventQueue.size()>0)
    {
        double delta_s = m_eventQueue.at(0)->getTimestamp() - m_simTime_s;

        if(delta_s==0)
            handleNextEvent();
        else
        {
            if(m_runHeadless)
                QTimer::singleShot(0.001, this, SLOT(onUpdated()));
        }

    }
    else
    {
        //std::cout << "StandaloneEventScheduler::handleNextEvent no remaining events" << std::endl;
    }
}


/*************************************
 *            PRIVATE SLOTS          *
 ************************************/

void StandaloneEventScheduler::onUpdated()
{
    handleNextEvent();
}

}
