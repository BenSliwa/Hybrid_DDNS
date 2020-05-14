#include "ddnsvehicle.h"
#include "app/ddns/tmobile_ul.h"
#include "app/ddns/tmobile_dl.h"
#include "app/ddns/vodafone_ul.h"
#include "app/ddns/vodafone_dl.h"
#include "app/ddns/o2_ul.h"
#include "app/ddns/o2_dl.h"


namespace LIMoSim
{

DDNSVehicle::DDNSVehicle(Car *_car, const Policy &_policy, const std::string _mno, const std::string &_direction) :
    CATVehicle(_car, _policy, _mno, _direction)
{
    initialize();
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void DDNSVehicle::initialize()
{
    DDNS *ddns = DDNS::getInstance();
    ddns->init("tmobile");

    CATVehicle::initialize();
}

CMEntry DDNSVehicle::getContext()
{
    DDNS *ddns = DDNS::getInstance();
    return ddns->getEntry(p_car->getPosition());
}

void DDNSVehicle::handleTransmission(double _prediction_mbits, double _deltaT_s)
{
    DDNS *ddns = DDNS::getInstance();
    double result_mbits = ddns->sample(_prediction_mbits, m_direction);

    // TODO: update the log
    std::cout << "CATVehicle " << m_direction << " : " << _prediction_mbits << "\t" << result_mbits << "\t" << m_buffer_mb << "\t" << _deltaT_s << std::endl;
    std::cout << Simulation::getInstance()->getSimTime() << "\t" <<  Simulation::getInstance()->getTimestamp() << std::endl;

    std::stringstream stream;
    stream << Simulation::getInstance()->getSimTime()-m_simTimeReference_s << "," << Simulation::getInstance()->getTimestamp() << ",";
    stream << result_mbits << "," << _prediction_mbits << "," << _deltaT_s << "," << m_buffer_mb;
    m_log += stream.str() + "\n";
}

/*************************************
 *           PRIVATE METHODS         *
 ************************************/

double DDNSVehicle::predictThroughput(double _payload_mb, const CMEntry &_entry)
{
    return predict(_payload_mb, _entry, m_mno, m_direction);
}

double DDNSVehicle::predict(double _payload_mb, const CMEntry &_entry, const std::string &_mno, const std::string _direction)
{
    double throughput_mbits = 0;
    if(_direction=="ul")
    {
        if(_mno=="tmobile")
            throughput_mbits = tmobile_ul_predict(_payload_mb, _entry.rsrp, _entry.rsrq, _entry.sinr, _entry.cqi, _entry.ta, _entry.velocity, _entry.cellId, _entry.f);
        else if(_mno=="vodafone")
            throughput_mbits = vodafone_ul_predict(_payload_mb, _entry.rsrp, _entry.rsrq, _entry.sinr, _entry.cqi, _entry.ta, _entry.velocity, _entry.cellId, _entry.f);
        else if(_mno=="o2")
            throughput_mbits = o2_ul_predict(_payload_mb, _entry.rsrp, _entry.rsrq, _entry.sinr, _entry.cqi, _entry.ta, _entry.velocity, _entry.cellId, _entry.f);
    }
    else if(_direction=="dl")
    {
        if(_mno=="tmobile")
            throughput_mbits = tmobile_dl_predict(_payload_mb, _entry.rsrp, _entry.rsrq, _entry.sinr, _entry.cqi, _entry.ta, _entry.velocity, _entry.cellId, _entry.f);
        else if(_mno=="vodafone")
            throughput_mbits = vodafone_dl_predict(_payload_mb, _entry.rsrp, _entry.rsrq, _entry.sinr, _entry.cqi, _entry.ta, _entry.velocity, _entry.cellId, _entry.f);
        else if(_mno=="o2")
            throughput_mbits = o2_dl_predict(_payload_mb, _entry.rsrp, _entry.rsrq, _entry.sinr, _entry.cqi, _entry.ta, _entry.velocity, _entry.cellId, _entry.f);
    }

    return throughput_mbits;
}

}
