#ifndef LIMOSIM_STANDALONEEVENTSCHEDULER_H
#define LIMOSIM_STANDALONEEVENTSCHEDULER_H

#include "LIMoSim/simulation/eventscheduler.h"
#include <deque>

#include <QObject>
#include <QTimer>
#include <QDateTime>

namespace LIMoSim
{

class StandaloneEventScheduler : public QObject, public EventScheduler
{
    Q_OBJECT
public:
    StandaloneEventScheduler(bool _runHeadless = false);

    // inherited
    void scheduleEvent(Event *_event);
    void cancelEvent(Event *_event);
    void deleteEvent(Event *_event);

    // simulation control
    void run();
    void step();
    void stop();

    //
    double getSimTime();

    //
    void handleNextEvent();

private slots:
    void onUpdated();

private:
    bool m_runHeadless;
    std::deque<Event*> m_eventQueue;
    int m_eventCount;
    double m_simTime_s;

};

}

#endif // LIMOSIM_STANDALONEEVENTSCHEDULER_H
