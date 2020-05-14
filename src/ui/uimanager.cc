#include "uimanager.h"
#include <QQmlContext>
#include "LIMoSim/world/world.h"
#include "LIMoSim/world/vehiclemanager.h"
#include "LIMoSim/world/road/lanesegment.h"
#include "ui/export/epsdocument.h"
#include "ui/export/epscanvas.h"
#include "ui/export/epscanvas3d.h"
#include "LIMoSim/mobility/car/strategic/strategicmodel.h"
#include "LIMoSim/settings/osm/wgs84.h"
#include "visualizer.h"
#include "ui/export/raytracingheatmap.h"
#include "LIMoSim/world/raytracing/connectivitymap.h"
#include "LIMoSim/mobility/car/prediction/sil.h"
#include "LIMoSim/settings/logger.h"
#include <QGeoPositionInfoSource>
#include "LIMoSim/world/raytracing/raytracing.h"
#include "LIMoSim/simulation/simulation.h"
#include "ui/standalone/standaloneeventscheduler.h"
#include "LIMoSim/settings/osm/wgs84.h"


namespace LIMoSim
{

UiManager::UiManager(QObject *_parent) :
    QObject(_parent),
    p_window(0),
    p_renderer(0)
{
    #ifdef Q_OS_ANDROID
        QGeoPositionInfoSource *p_source = QGeoPositionInfoSource::createDefaultSource(this);
        connect(p_source, SIGNAL(positionUpdated(QGeoPositionInfo)), this, SLOT(onPositionUpdated(QGeoPositionInfo)));
        //connect(p_source, SIGNAL(error(QGeoPositionInfoSource::Error)), this, SLOT(onError(QGeoPositionInfoSource::Error)));
        p_source->setUpdateInterval(1000);
        p_source->startUpdates();
    #else
    #endif
}

UiManager* UiManager::getInstance()
{
    static UiManager instance;
    return &instance;
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void UiManager::loadQml()
{
    // load the qml file and register Qt classes
    QQmlContext *context = m_qml.rootContext();
    context->setContextProperty("UiManager", this);
    qmlRegisterType<OpenGL::OpenGLWindow>("OpenGL", 1, 0, "OpenGLWindow");
    m_qml.setSource(QUrl(QLatin1String("qrc:/main.qml")));
    m_qml.show();

    //
    QObject *object = m_qml.rootObject()->findChild<OpenGLWindow*>("map");
    p_window = qobject_cast<OpenGLWindow*>(object);
    connect(p_window, SIGNAL(initialized()), this, SLOT(onInitialized()));

    #ifdef Q_OS_ANDROID
        onInitialized();
    #else
    #endif
}

/*************************************
 *            VISUALIZATION          *
 ************************************/

void UiManager::addVisualizer(Visualizer *_visualizer)
{
    m_visualizer << _visualizer;
}

void UiManager::drawNodes(Canvas *_canvas)
{
    World *world = World::getInstance();
    std::map<std::string, Node*> nodes = world->getNodes();
    std::map<std::string, Node*>::iterator it;
    for(it=nodes.begin(); it!=nodes.end(); it++)
    {
        Node *node = it->second;
        if(world->filterRoads(node->getWays()).size()==0) // do not draw nodes for buildings
            continue;

        _canvas->drawNode(node);
    }
}

void UiManager::drawSegments(Canvas *_canvas)
{
    World *world = World::getInstance();
    std::map<std::string, Road*> roads = world->getRoads();
    std::map<std::string, Road*>::iterator it;
    for(it=roads.begin(); it!=roads.end(); it++)
    {
        Road *road = it->second;
        std::vector<RoadSegment*> segments = road->getSegments();

        for(unsigned int i=0; i<segments.size(); i++)
        {
            RoadSegment *segment = segments.at(i);
            _canvas->drawRoadSegment(segment);
        }
    }
}

void UiManager::drawBuildings(Canvas *_canvas)
{
    World *world = World::getInstance();
    std::map<std::string, Building*> buildings = world->getBuildings();
    std::map<std::string, Building*>::iterator it;
    for(it=buildings.begin(); it!=buildings.end(); it++)
    {
        Building *building = it->second;
        _canvas->drawBuilding(building);
    }
}

void UiManager::drawAreas(Canvas *_canvas)
{
    World *world = World::getInstance();
    std::map<std::string, Area*> areas = world->getAreas();
    std::map<std::string, Area*>::iterator it;
    for(it=areas.begin(); it!=areas.end(); it++)
    {
        Area *area = it->second;
        _canvas->drawArea(area);
    }
}

QVector<QVector3D> trajectory;
void UiManager::drawVehicles(Canvas *_canvas)
{
    VehicleManager *vehicleManager = VehicleManager::getInstance();
    std::map<std::string, Vehicle*> vehicles = vehicleManager->getVehicles();
    std::map<std::string, Vehicle*>::iterator it;

    for(it=vehicles.begin(); it!=vehicles.end(); it++)
    {
        Vehicle *vehicle = it->second;
        Vector3d p = vehicle->getPosition();
        float x = p.x;
        float y = p.y;
        float z = p.z;
        float w = 3;

        //Vector3d tx = Vector3d(100,100, 20);
/*
        World *world = World::getInstance();
        Vector3d tx = Vector3d(world->getBoxMin().x, world->getBoxMin().y, 20);

        Vector3d rx = p;//Vector3d(700,700);

        Raytracing rayTracing;

        RayTrace t = rayTracing.trace(tx, rx);
        std::vector<RayIntersection> trace = t.intersections;
        trace.insert(trace.begin(), RayIntersection{true, tx, 0});
        trace.push_back(RayIntersection{true, rx, 0});


        QString data;
        QTextStream stream(&data);

        double simTime_s = Simulation::getInstance()->getSimTime();
        double L_dB = trace.size() * 9 + t.attenuated_m * 0.4;
        double distance_m = t.distance_m;

        stream << simTime_s << "," << distance_m << "," << t.attenuated_m << "," << t.intersections.size() << "\n";

        FileHandler::append(data.toStdString(), "raytracing.txt");

        for(int i=0; i<trace.size(); i++)
        {
            RayIntersection entry =  trace.at(i);
            float x = entry.point.x;
            float y = entry.point.y;
            float z = entry.point.z;

            OpenGLShape shape("yellow");
            shape.addVertex(QVector3D(x-w, y-w, z-w));
            shape.addVertex(QVector3D(x-w, y+w, z-w));
            shape.addVertex(QVector3D(x+w, y+w, z-w));
            shape.addVertex(QVector3D(x+w, y-w, z-w));

            p_renderer->drawCube(shape, w, false);
        }
    */


        if(vehicle->getType()=="Car")
        {
            Car *car = dynamic_cast<Car*>(vehicle);

            float w = car->getWidth();
            float l = car->getLength();
            Vector3d left = Vector3d::fromSphere(90, 90 + car->getOrientation().z, w/2);
            Vector3d back = left.rotateRight().normed() * l;

            QString color = "yellow";
            if(car->getId()=="C0")
                color = "red";

            Car *c0 = dynamic_cast<Car*>(vehicleManager->getVehicle("C0"));
            RoadAwarenessEntry leader = c0->m_awareness.findLeader(c0);
            if(car==leader.car)
                color = "blue";

            //
            OpenGLShape shape(color);
            shape.addVertex(m_canvas.fromVector(p + left));
            shape.addVertex(m_canvas.fromVector(p - left));
            shape.addVertex(m_canvas.fromVector(p - left + back));
            shape.addVertex(m_canvas.fromVector(p + left + back));
            p_renderer->drawCube(shape, 1.5, false);

            //
            if(car->getId()==m_trackedVehicle.toStdString())
            {
                updateCamera(p);

                //
                QVector<QVector3D> trajectory;
                RoadPosition info = car->getRoadPosition();
                if(info.path.size()>0)
                {
                    trajectory << m_canvas.fromVector(car->getPosition());
                    for(int i=0; i<info.path.size(); i++)
                    {
                        Vector3d pos = info.path.at(i)->getEndpoint()->getNode()->getPosition();
                        trajectory << m_canvas.fromVector(pos);
                    }

                    drawTrajectory(trajectory);
                }


            }

        }
        else
        {
            OpenGLShape shape("yellow");
            shape.addVertex(QVector3D(x-w, y-w, z));
            shape.addVertex(QVector3D(x-w, y+w, z));
            shape.addVertex(QVector3D(x+w, y+w, z));
            shape.addVertex(QVector3D(x+w, y-w, z));

            p_renderer->drawCube(shape, w, false);




            //
            trajectory << QVector3D(x, y, z);
            if(trajectory.size()>200)
                trajectory.pop_front();


            for(int i=0; i<trajectory.size(); i++)
            {
                OpenGLShape t("red");
                QVector3D v0 = trajectory.at(i);

                float x = v0.x();
                float y = v0.y();
                float z = v0.z();
                float w = 1;

                t.addVertex(QVector3D(x-w, y-w, z));
                t.addVertex(QVector3D(x-w, y+w, z));
                t.addVertex(QVector3D(x+w, y+w, z));
                t.addVertex(QVector3D(x+w, y-w, z));

                p_renderer->drawCube(t, w, false);
            }

        }

    }
}



/*************************************
 *               EVENTS              *
 ************************************/

void UiManager::handleExternalDrop(const QStringList &_files)
{
    qDebug() << "UiManager::handleExternalDrop" << _files;

    // TODO:
}

void UiManager::handleKeyPress(int _key)
{
    qDebug() << "UiManager::handleKeyPress" << _key;

    // TODO:

    if(_key==Qt::Key_P)
    {
        //EpsCanvas3d canvas(p_renderer);
        EpsCanvas canvas;
        canvas.init();


        drawBuildings(&canvas);
        drawSegments(&canvas);


        for(auto vis : m_visualizer)
            vis->update(&canvas);




        /*
        VehicleManager *vehicleManager = VehicleManager::getInstance();
        std::map<std::string, Vehicle*> vehicles = vehicleManager->getVehicles();
        std::map<std::string, Vehicle*>::iterator it;
        for(it=vehicles.begin(); it!=vehicles.end(); it++)
        {
            Vehicle *vehicle = it->second;
            canvas.drawVehicle(vehicle);
        }*/

        canvas.save("screen.eps");
    }
    else if(_key==Qt::Key_R)
    {


    }
    else if(_key==Qt::Key_Plus)
    {
        p_renderer->zoomIn();
    }
    else if(_key==Qt::Key_T)
    {
        LIMoSim::Simulation *simulation = LIMoSim::Simulation::getInstance(0);
        LIMoSim::StandaloneEventScheduler *scheduler = dynamic_cast<LIMoSim::StandaloneEventScheduler*>(simulation->getEventScheduler());
        if(scheduler && scheduler->getState()==SIM_STATE::RUNNING)
            scheduler->stop();
        else if(scheduler && scheduler->getState()==SIM_STATE::STOPPED)
            scheduler->run();

    }
    else if(_key==Qt::Key_Minus)
    {
        p_renderer->zoomOut();
    }
    else if(_key==Qt::Key_Left)
    {
        p_renderer->updateTarget(0, 5);
    }
    else if(_key==Qt::Key_Right)
    {
        p_renderer->updateTarget(0, -5);
    }
    else if(_key==Qt::Key_Up)
    {
        // p_renderer->updateEye(QVector3D(0, 0.1, 0));
        p_renderer->updateTarget(5, 0);
    }
    else if(_key==Qt::Key_Down)
    {
        p_renderer->updateTarget(-5, 0);
    }
    else if(_key==Qt::Key_Space)
    {
        p_renderer->setEye(QVector3D(1.18, 0.53, 2));
        p_renderer->setElevation(180);
        p_renderer->setAzimuth(90);
        p_renderer->updateTarget();
    }
    else if(_key==Qt::Key_Escape)
    {
        if(m_trackedVehicle=="C0")  // TODO: new variable lastTrackedVehicle
            setTrackedVehicle("");
        else
            setTrackedVehicle("C0");
    }
    else if(_key==Qt::Key_W)
    {
        // car surrogate
        VehicleManager *vm = VehicleManager::getInstance();
        Car *car = dynamic_cast<Car*>(vm->getVehicle("C0"));
        if(car)
        {
            float tau_s = 1.0;
            float step_s = 0.25;
            int steps = tau_s/step_s;

            for(int i=0; i<steps; i++)
                car->move(step_s);
        }
    }
    else if(_key==Qt::Key_S)
    {
        //                  TODO: this is a dirty hack, add something better
        for(int i=0; i<m_visualizer.size(); i++)
            m_visualizer.at(i)->update(0);
    }
    else if(_key==Qt::Key_D)
    {

    }
    else if(_key==Qt::Key_A)
    {

    }
}

void UiManager::updateCamera(const Vector3d &_tracked)
{
    QVector3D eye = p_renderer->getEye();
    QVector3D ndc = p_renderer->toNDC(QVector3D(_tracked.x, _tracked.y, _tracked.z));
    ndc.setZ(eye.z());

    p_renderer->setEye(ndc);
    p_renderer->setElevation(180);
    p_renderer->setAzimuth(90);
    p_renderer->updateTarget(0, 0);
}

void UiManager::setTrackedVehicle(const QString &_id)
{
    m_trackedVehicle = _id;
}

OpenGL::OpenGLCanvas* UiManager::getOpenGLCanvas()
{
    return &m_canvas;
}

OpenGL::OpenGLRenderer* UiManager::getRenderer()
{
    return p_renderer;
}

OpenGL::OpenGLWindow* UiManager::getWindow()
{
    return p_window;
}

void UiManager::drawTrajectory(QVector<QVector3D> &_trajectory, double _width)
{
    for(int i=1; i<_trajectory.size(); i++)
    {
        QVector3D from = _trajectory.at(i-1);
        QVector3D to = _trajectory.at(i);

        m_canvas.drawLine(Vector3d(from.x(), from.y(), from.z()), Vector3d(to.x(), to.y(), to.z()), _width, "yellow", false);
    }
}

/*************************************
 *            PRIVATE SLOTS          *
 ************************************/

void UiManager::onPositionUpdated(QGeoPositionInfo _info)
{

}

void UiManager::onInitialized()
{
    p_renderer = p_window->getRenderer();
    m_canvas.setRenderer(p_renderer);
    connect(p_window, SIGNAL(updated()), this, SLOT(onPaint()));

    //
    //drawNodes(&m_canvas);
    drawSegments(&m_canvas);
    drawBuildings(&m_canvas);
    //drawAreas(&m_canvas);

    for(auto vis : m_visualizer)
    {
        if(vis->getType()==VISUALIZER_TYPE::STATIC)
            vis->update(&m_canvas);
    }

    p_renderer->setRenderingStatus(true);
}

void UiManager::onPaint()
{
    drawVehicles(&m_canvas);

    for(auto vis : m_visualizer)
    {
        if(vis->getType()==VISUALIZER_TYPE::DYNAMIC)
            vis->update(&m_canvas);
    }

    emit info(p_renderer->info());
}

}
