#ifndef LIMOSIM_CAT_H
#define LIMOSIM_CAT_H

#include <math.h>
#include "LIMoSim/simulation/eventhandler.h"
#include "LIMoSim/settings/filehandler.h"
#include "LIMoSim/simulation/simulation.h"
#include "ddns.h"
#include "rlcat.h"

namespace LIMoSim
{

namespace POLICY_TYPE
{
    enum
    {
        PERIODIC,
        CAT,
        ML_CAT,
        RL_CAT
    };
}


struct Policy
{
    int type;
    double metricMin;
    double metricMax;
    double alpha;
    double tau;
    double gamma;
};


class CAT : public EventHandler
{
public:
    CAT(const Policy &_policy, const std::string _mno, const std::string &_direction);

    void initialize();
    void handleEvent(Event *_event);

    virtual CMEntry getContext() = 0;
    virtual void handleTransmission(double _prediction_mbits, double _deltaT_s) = 0;
    virtual double predictThroughput(double _payload_mb, const CMEntry &_entry) = 0;


    bool cat(double _value);
    void setLogPath(const std::string &_path);

protected:
    bool evaluateTransmission(const CMEntry &_entry, double _prediction_mbits, double _deltaT_s);
    bool evaluateProbability(double _probability);
    double map(double _value, double _inMin, double _inMax, double _outMin, double _outMax);


protected:
    std::string m_mno;
    std::string m_direction;

    Policy m_policy;
    Event *m_updateTimer;

    double m_buffer_mb;
    double m_sensorSample_mb;
    double m_lastTransmission_s;

    int m_iteration;
    double m_simTimeReference_s;
    std::string m_log;
    std::string m_logPath;

    RLCAT m_rl;


};

}


#endif // LIMOSIM_CAT_H
