#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "LIMoSim/simulation/simulation.h"
#include "LIMoSim/settings/filehandler.h"
#include "LIMoSim/settings/osm/wgs84.h"
#include "LIMoSim/world/road/road.h"
#include "LIMoSim/world/world.h"
#include "LIMoSim/world/vehiclemanager.h"

#include "ui/uimanager.h"
#include "ui/standalone/standaloneeventscheduler.h"
#include "ui/export/epsdocument.h"
#include "ui/opengl/earclipping.h"

#include "LIMoSim/mobility/routing/dijkstra.h"
#include "LIMoSim/mobility/car/strategic/strategicmodel.h"
#include "LIMoSim/settings/logger.h"


#include "LIMoSim/world/raytracing/antenna.h"
#include <stdlib.h>

#include "app/ddns/ddnsvehicle.h"
#include "app/ddns/ddns.h"
#include "app/ddns/ns3catvehicle.h"
#include "ui/export/epsdocument.h"
#include "app/ddns/connectivitymapvisualizer.h"



using namespace LIMoSim;

void initializeEnvironment(const QString &_map)
{
    World *world = World::getInstance();
    #ifdef Q_OS_ANDROID
        world->loadMap("/sdcard/dortmund_south_west.osm");
    #else
        world->loadMap(_map.toStdString());
    #endif
    world->filterNodes();
    world->initIntersections();
    world->linkIntersections();

    std::cout << "initializeEnvironment" << std::endl;
}




void initializeVehicles()
{
    std::cout << "initializeVehicles" << std::endl;

    VehicleManager *vehicleManager = VehicleManager::getInstance();
    World *world = World::getInstance();


    Car *car0 = vehicleManager->createCar("C0");
    Road *road = world->getRoadById("39301055");
    vehicleManager->setPosition(car0, road, 0, LANE_TYPE::BACKWARD, 0, 0);
    car0->initialize();
}

void executeLoadEvaluation(const std::string &_type, int _numVehicles)
{
    Car *car0 = dynamic_cast<Car*>(VehicleManager::getInstance()->getVehicle("C0"));
    std::string method = "ddns"; // ddns, ns3, trace

   // method = "";


    Policy policyUl;
    Policy policyDl;

    if(_type=="per")
    {
        policyUl = Policy{POLICY_TYPE::PERIODIC, 0, 30, 6, 0, 0};
        policyDl = Policy{POLICY_TYPE::PERIODIC, 0, 30, 6, 0, 0};
    }
    else if(_type=="cat")
    {
        policyUl = Policy{POLICY_TYPE::CAT, 0, 30, 6, 0, 0};
        policyDl = Policy{POLICY_TYPE::CAT, 0, 30, 6, 0, 0};
    }
    else if(_type=="mlcat")
    {
        policyUl = Policy{POLICY_TYPE::ML_CAT, 0, 30, 6, 0, 0};
        policyDl = Policy{POLICY_TYPE::ML_CAT, 0, 30, 6, 0, 0};
    }
    else if(_type=="rlcat")
    {
        policyUl = Policy{POLICY_TYPE::RL_CAT, 30, 40, 6, 0, 0.8};
        policyDl = Policy{POLICY_TYPE::RL_CAT, 30, 40, 6, 0, 0.8};
    }

    std::string folder = method + "/results/ddns";
    if(method=="ddns")
    {
        DDNSVehicle *ul = new DDNSVehicle(car0, policyUl, "tmobile", "ul");
        DDNSVehicle *dl = new DDNSVehicle(car0, policyDl, "tmobile", "dl");

        dl->setLogPath(folder + "/" + _type + "_tmobile_dl");
        ul->setLogPath(folder + "/" + _type + "_tmobile_ul");

    }
    else if(method=="ns3")
    {
        NS3CATVehicle *ul = new NS3CATVehicle(car0, policyUl, "tmobile", "ul");
        NS3CATVehicle *dl = new NS3CATVehicle(car0, policyDl, "tmobile", "dl");

        dl->setLogPath(folder + "/" + _type + "_tmobile_dl");
        ul->setLogPath(folder + "/" + _type + "_tmobile_ul");
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    std::cout << std::endl;

    DDNS *ddns = DDNS::getInstance();
    srand (1);

    initializeEnvironment("dortmund_south_west.osm");

    //
    bool runHeadless = false;
    StandaloneEventScheduler *scheduler = new StandaloneEventScheduler(runHeadless);
    Simulation *simulation = Simulation::getInstance(scheduler);

    //
    initializeVehicles();
    executeLoadEvaluation("per", 1); // per, cat, mlcat


    //
    if(!runHeadless)
    {
        UiManager *ui = UiManager::getInstance();
        ui->loadQml();
        ui->setTrackedVehicle("C0");
    }

    #ifdef Q_OS_ANDROID

    #else
        simulation->run();
    #endif
    return app.exec();
}
