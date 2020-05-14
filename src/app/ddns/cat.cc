#include "cat.h"

namespace LIMoSim
{

CAT::CAT(const Policy &_policy, const std::string _mno, const std::string &_direction) :
    EventHandler(),
    m_mno(_mno),
    m_direction(_direction),
    m_policy(_policy),
    m_buffer_mb(0),
    m_sensorSample_mb(0.05),
    m_lastTransmission_s(0),
    m_iteration(0),
    m_simTimeReference_s(Simulation::getInstance()->getSimTime())
{
    m_lastTransmission_s = rand() * (long)(10.0) / RAND_MAX;

    initialize();

    if(_policy.type==POLICY_TYPE::RL_CAT)
        m_rl.init(_mno, _direction);

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void CAT::initialize()
{
    m_updateTimer = new Event(1.0, this);
    scheduleEvent(m_updateTimer);

    m_log = "simTime,realTime,result,prediction,deltaT,payload\n";
}

void CAT::handleEvent(Event *_event)
{

    if(_event==m_updateTimer)
    {
        CMEntry entry = getContext();

        // update the sensor app
        m_buffer_mb += m_sensorSample_mb;

        // update the transmission scheme
        double deltaT_s = _event->getTimestamp() - m_lastTransmission_s;
        double prediction_mbits = predictThroughput(m_buffer_mb, entry);
        bool tx = false;
        if(entry.isValid)
        {
            if(deltaT_s>120)
                tx = true;
            else if(deltaT_s>=10)
                tx = evaluateTransmission(entry, prediction_mbits, deltaT_s);
        }

        //
        if(tx)
        {
            handleTransmission(prediction_mbits, deltaT_s);

            m_buffer_mb = 0;
            m_lastTransmission_s = _event->getTimestamp();
        }

        //
        scheduleEvent(_event, 1);
    }
}

bool CAT::cat(double _value)
{
    double theta = map(_value, m_policy.metricMin, m_policy.metricMax, 0, 1);
    double p = powf(theta, m_policy.alpha);
    if(p<0)
        return false;
    return evaluateProbability(p);
}

void CAT::setLogPath(const std::string &_path)
{
    m_logPath = _path;
}

/*************************************
 *           PRIVATE METHODS         *
 ************************************/

bool CAT::evaluateTransmission(const CMEntry &_entry,  double _prediction_mbits, double _deltaT_s)
{
    bool tx = false;
    if(m_policy.type==POLICY_TYPE::PERIODIC)
        tx = true;
    else if(m_policy.type==POLICY_TYPE::CAT)
        tx = cat(_entry.sinr);
    else if(m_policy.type==POLICY_TYPE::ML_CAT)
        tx = cat(_prediction_mbits);
    else if(m_policy.type==POLICY_TYPE::RL_CAT)
    {
        std::string state = m_rl.getStateKey(_deltaT_s, _prediction_mbits, _prediction_mbits, &m_policy);

        double q_idle = m_rl.getQValue(state, ACTION::IDLE);
        double q_transmit = m_rl.getQValue(state, ACTION::TRANSMIT);

        tx = (q_transmit>q_idle);
    }

    return tx;
}

bool CAT::evaluateProbability(double _probability)
{
    double r = ((double) rand() / (RAND_MAX));
    if(r<_probability || _probability>=1)
        return true;
    return false;
}

double CAT::map(double _value, double _inMin, double _inMax, double _outMin, double _outMax)
{
    return (_value-_inMin) / (_inMax-_inMin) * (_outMax-_outMin) + _outMin;
}


}
