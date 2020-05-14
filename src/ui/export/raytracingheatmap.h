#ifndef RAYTRACINGHEATMAP_H
#define RAYTRACINGHEATMAP_H

#include <QObject>
#include <QDebug>
#include "LIMoSim/world/world.h"
#include "LIMoSim/world/raytracing/raytracing.h"
#include "LIMoSim/world/raytracing/antenna.h"
#include "epsdocument.h"
#include "boundingbox.h"

namespace LIMoSim
{

class RayTracingHeatMap : public QObject
{
    Q_OBJECT
public:
    RayTracingHeatMap(QObject *_parent = 0);

    void exportFromFile(const QString &_path, const Vector3d &_origin, int _rows, int _columns, double _min, double _max);


public:
    void drawCell(int _x, int _y, const QColor &_color);
    void drawCircle(const Vector3d &_center);

    void drawBuildings();
    void drawPolygon(const std::vector<Node*> &_nodes, const QString &_color);
    int findFirstNodeInside(const std::vector<Node*> &_nodes);
    Vector3d checkIntersection(const Vector3d &_origin, const Vector3d &_dir, const Vector3d &_p0, const Vector3d &_p1);

    Vector3d getCanvasPosition(const Vector3d &_position);
    QPointF getCanvasPoint(const Vector3d &_position);
    void drawAxis(int _steps);
    void drawColorBar(double _min, double _max);

    double computeRSRP(const Antenna &_antenna, const Vector3d &_rx);
    QColor getColor(double _value, double _min, double _max);


private:
    EpsDocument m_eps;
    QVector<QColor> m_colorMap;
    BoundingBox m_box;
    Vector3d m_worldOrigin;
    Vector3d m_reference;

    double m_width;
    double m_height;
    double m_cellSize_m;

    double m_fontSize;
    double m_tickSize;
};

}

#endif // RAYTRACINGHEATMAP_H
