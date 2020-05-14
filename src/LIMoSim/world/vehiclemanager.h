#ifndef LIMOSIM_VEHICLEMANAGER_H
#define LIMOSIM_VEHICLEMANAGER_H

#include "LIMoSim/mobility/car/car.h"
#include "LIMoSim/mobility/uav/uav.h"
#include <map>

namespace LIMoSim
{

class VehicleManager
{
public:
    VehicleManager();
    ~VehicleManager();

    static VehicleManager* getInstance();

    void setPosition(Car *_car, Road *_road, int _segmentIndex, int _laneType, int _laneIndex, double _offset_m);
    void setRandomPosition(Car *_car);

    // creation
    Car* createCar(const std::string &_id);
    UAV* createUAV(const std::string &_id);

    // deletion
    void deleteVehicle(const std::string &_id);
    bool hasVehicle(const std::string &_id);

    //
    Vehicle* getVehicle(const std::string &_id);
    const std::map<std::string, Vehicle*>& getVehicles();

private:
    std::map<std::string, Vehicle*> m_vehicles;
};


}

#endif // LIMOSIM_VEHICLEMANAGER_H
