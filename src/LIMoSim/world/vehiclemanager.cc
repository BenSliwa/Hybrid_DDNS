#include "vehiclemanager.h"
#include "LIMoSim/world/world.h"

namespace LIMoSim
{

VehicleManager::VehicleManager()
{

}

VehicleManager::~VehicleManager()
{

}

VehicleManager* VehicleManager::getInstance()
{
    static VehicleManager instance;
    return &instance;
}


/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void VehicleManager::setPosition(Car *_car, Road *_road, int _segmentIndex, int _laneType, int _laneIndex, double _offset_m)
{
    RoadPosition roadPosition;
    roadPosition.offset_m = _offset_m;
    roadPosition.laneSegment = _road->getSegmentWithIndex(_segmentIndex)->getLane(_laneType, _laneIndex);

    _car->setRoadPosition(roadPosition);
}

void VehicleManager::setRandomPosition(Car *_car)
{
    std::vector<Routable*> graph = World::getInstance()->buildRoutingGraph();
    int index = (rand() * (long)(graph.size()) / RAND_MAX);

    RoadPosition roadPosition;
    Gate *gate = dynamic_cast<Gate*>(graph.at(index));
    //roadPosition.path.push_back(gate);  // no path for RandomDirection
    roadPosition.laneSegment = gate->getEndpoint()->getOwner()->getLanes(LANE_TYPE::BACKWARD).at(0);
    roadPosition.offset_m = (rand() * (long)(roadPosition.laneSegment->computeLength()) / RAND_MAX);

    _car->setRoadPosition(roadPosition);
}

Car* VehicleManager::createCar(const std::string &_id)
{
    Car *car = new Car(_id);
    m_vehicles[_id] = car;

    return car;
}

UAV* VehicleManager::createUAV(const std::string &_id)
{
    UAV *uav = new UAV(_id);
    m_vehicles[_id] = uav;

    return uav;
}

void VehicleManager::deleteVehicle(const std::string &_id)
{
    if(m_vehicles.count(_id)>0)
    {
        Vehicle *vehicle = m_vehicles[_id];
        delete vehicle;

        m_vehicles.erase(_id);
    }
}

bool VehicleManager::hasVehicle(const std::string &_id)
{
    if(m_vehicles.count(_id)>0)
        return true;
    return false;
}

Vehicle* VehicleManager::getVehicle(const std::string &_id)
{
    if(m_vehicles.count(_id)>0)
        return m_vehicles[_id];
    return 0;
}

const std::map<std::string, Vehicle*>& VehicleManager::getVehicles()
{
    return m_vehicles;
}


}
