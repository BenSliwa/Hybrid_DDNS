#ifndef LIMOSIM_CANVAS_H
#define LIMOSIM_CANVAS_H

#include "LIMoSim/world/world.h"
#include "LIMoSim/world/node.h"
#include "LIMoSim/mobility/vehicle.h"
#include <QColor>

namespace LIMoSim
{

class Canvas
{
public:
    Canvas();

    virtual void drawNode(Node *_node) = 0;
    virtual void drawRoadSegment(RoadSegment *_segment) = 0;
    virtual void drawBuilding(Building *_building) = 0;
    virtual void drawVehicle(Vehicle *_vehicle) = 0;
    virtual void drawArea(Area *_area) = 0;

    virtual void drawCube(const Vector3d &_position, float _width, const QColor &_color, bool _static=true) = 0;
    virtual void drawEllipse(const Vector3d &_center, double _width, double _height, double _rotation, const QColor &_color, bool _static=true) = 0;
    virtual void drawLine(const Vector3d &_from, const Vector3d &_to, double _width, const QColor &_color, bool _static=true) = 0;


protected:
    World *p_world;

};

}

#endif // LIMOSIM_CANVAS_H
