#ifndef LIMOSIM_EPSCANVAS_H
#define LIMOSIM_EPSCANVAS_H

#include <QPointF>
#include <QVector3D>
#include "ui/canvas.h"
#include "epsdocument.h"
#include "LIMoSim/mobility/car/car.h"

namespace LIMoSim
{

enum
{
    BUILDING_COLOR,
    ROAD_COLOR,
    BACKGROUND_COLOR
};

class EpsCanvas : public Canvas
{
public:
    EpsCanvas();

    //
    void init();
    virtual void save(const QString &_path);


    // Canvas
    void drawNode(Node *_node);
    void drawRoadSegment(RoadSegment *_segment);
    void drawBuilding(Building *_building);
    void drawVehicle(Vehicle *_vehicle);
    void drawArea(Area *_area);

    //
    void drawCube(const Vector3d &_position, float _width, const QColor &_color, bool _static=true);
    void drawEllipse(const Vector3d &_center, double _width, double _height, double _rotation, const QColor &_color, bool _static=true);
    void drawLine(const Vector3d &_from, const Vector3d &_to, double _width, const QColor &_color, bool _static=true);

    //
    virtual void drawShape(const QVector<QVector3D> &_ground, double _height, const QColor &_color);
    virtual void drawPolygon(const QVector<QVector3D> &_polygon, const QVector3D &_normal, const QColor &_color);

    //
    QVector<QVector3D> findPolygon(const std::vector<Node*> &_nodes);
    QVector3D toVector(const Vector3d &_vector);

protected:
    EpsDocument m_document;

    QMap<int, QString> m_style;
};

}

#endif // LIMOSIM_EPSCANVAS_H

