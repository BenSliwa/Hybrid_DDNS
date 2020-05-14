#include "catvehicle.h"
#include <QGuiApplication>

namespace LIMoSim
{

CATVehicle::CATVehicle(Car *_car, const Policy &_policy, const std::string _mno, const std::string &_direction) :
    CAT(_policy, _mno, _direction),
    CarObserver(_car)
{
    CATVehicle::initialize();
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void CATVehicle::handleNodeReached(Node *_node)
{
    std::string scenario = "";
    if(_node->getId()=="276100595")
        scenario = "suburban";
    else if(_node->getId()=="273109929")
        scenario = "highway";

    if(_node->getId()=="276100595" || _node->getId()=="273109929")
    {
        std::stringstream stream;
        stream << m_logPath << "_" << scenario << "_" << m_iteration << ".csv" ;
        FileHandler::write(m_log,  stream.str());

        m_log = "simTime,realTime,result,prediction,deltaT,payload\n";

        if(scenario=="suburban")
            m_iteration++;
        Simulation::getInstance()->updateTimeReference();
        m_simTimeReference_s = Simulation::getInstance()->getSimTime();
    }

    if(m_iteration==30)
    {
        QGuiApplication::quit();
    }

}




}
