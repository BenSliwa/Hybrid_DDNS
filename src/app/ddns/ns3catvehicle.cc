#include "ns3catvehicle.h"
#include "ns3/tmobile_dl_ns3.h"
#include "ns3/tmobile_ul_ns3.h"

namespace LIMoSim
{

NS3CATVehicle::NS3CATVehicle(Car *_car, const Policy &_policy, const std::string _mno, const std::string &_direction) :
    CATVehicle(_car, _policy, _mno, _direction)
{
    initialize();
}


/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void NS3CATVehicle::initialize()
{
    // TODO MANUEL: extend if further initialization is required


    //
    CATVehicle::initialize();
}


CMEntry NS3CATVehicle::getContext()
{
    CMEntry entry;
    entry.isValid = true;
    entry.velocity = p_car->getSpeed();

    // TODO MANUEL: set all available features - e.g., RSRP, RSRQ, SINR
    entry.rsrp = 0;
    entry.rsrq = 0;
    entry.sinr = 0;
    entry.f = 0;



    return entry;
}

void NS3CATVehicle::handleTransmission(double _prediction_mbits, double _deltaT_s)
{
    // TODO MANUEL: perform the TCP data transfer


    // TODO MANUEL: extend the log entry with simTime,realTime,result,prediction,deltaT,payload
    // can also be done elsewhere if async, just make sure the entry is written here
    m_log += "\n";


}

double NS3CATVehicle::predictThroughput(double _payload_mb, const CMEntry &_entry)
{
    double throughput_mbits = 0;
    if(m_direction=="ul")
        throughput_mbits = tmobile_ul_ns3_predict(_payload_mb, _entry.rsrp, _entry.rsrq, _entry.sinr, _entry.velocity, _entry.f);
    else if(m_direction=="dl")
        throughput_mbits = tmobile_dl_ns3_predict(_payload_mb, _entry.rsrp, _entry.rsrq, _entry.sinr, _entry.velocity, _entry.f);

    return throughput_mbits;
}


/*************************************
 *           PRIVATE METHODS         *
 ************************************/




}
