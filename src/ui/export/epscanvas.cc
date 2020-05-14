#include "epscanvas.h"
#include <QDebug>
#include "LIMoSim/world/world.h"
#include "LIMoSim/settings/osm/wgs84.h"

namespace LIMoSim
{

EpsCanvas::EpsCanvas() :
    Canvas()
{
    QMap<int, QString> dark;
    dark[BUILDING_COLOR] = "#38383D";
    dark[ROAD_COLOR] = "#0077B5";
    dark[BACKGROUND_COLOR] = "#1c1c1c";

    QMap<int, QString> blackWhite;
    blackWhite[BUILDING_COLOR] = "black";
    blackWhite[ROAD_COLOR] = "none";
    blackWhite[BACKGROUND_COLOR] = "white";



    m_style = dark;
    //m_style = blackWhite;




}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void EpsCanvas::init()
{
    double w = 5000;
    double h = 5000;

    m_document.init(w, h);

    m_document.drawSquare(QPointF(w/2.0, h/2.0), w, m_style[BACKGROUND_COLOR]);
}

void EpsCanvas::save(const QString &_path)
{

    Vector3d origin = World::getInstance()->getReference();
    Vector3d eNB = WGS84::computeOffset(Vector3d(7.466344,51.505661), origin);
    Vector3d car = WGS84::computeOffset(Vector3d(7.46854058,51.50979057), origin);
    drawEllipse(eNB, 10, 10, 0, "red");
    drawEllipse(car, 10, 10, 0, "yellow");

    m_document.save(_path);
}

void EpsCanvas::drawNode(Node *_node)
{

}

void EpsCanvas::drawRoadSegment(RoadSegment *_segment)
{
    if(m_style[ROAD_COLOR]!="none")
    {
        Endpoint *from = _segment->getFromEndpoint();
        Endpoint *to = _segment->getToEndpoint();

        QVector<QVector3D> polygon;
        polygon << toVector(from->leftVertex);
        polygon << toVector(from->rightVertex);
        polygon << toVector(to->rightVertex);
        polygon << toVector(to->leftVertex);

        drawPolygon(polygon, QVector3D(0, 0, 1), m_style[ROAD_COLOR]);
    }
}

void EpsCanvas::drawBuilding(Building *_building)
{
    if(m_style[BUILDING_COLOR]!="none")
    {
        QVector<QVector3D> ground = findPolygon(_building->getNodes());
        drawShape(ground, _building->getHeight(), m_style[BUILDING_COLOR]);
    }
}

void EpsCanvas::drawVehicle(Vehicle *_vehicle)
{
    Car *car = dynamic_cast<Car*>(_vehicle);

    float w = car->getWidth();
    float l = car->getLength();
    Vector3d left = Vector3d::fromSphere(90, 90 + car->getOrientation().z, w/2);
    Vector3d back = left.rotateRight().normed() * l;

    Vector3d p = _vehicle->getPosition();
    QVector<QVector3D> top;
    top << toVector(p + left);
    top << toVector(p - left);
    top << toVector(p - left + back);
    top << toVector(p + left + back);


    drawShape(top, 1.5, "yellow");
}

void EpsCanvas::drawArea(Area *_area)
{

}

void EpsCanvas::drawCube(const Vector3d &_position, float _width, const QColor &_color, bool _static)
{
    float w = _width * 2;
    float l = _width * 2;
    Vector3d left = Vector3d::fromSphere(90, 90, w/2);
    Vector3d back = left.rotateRight().normed() * l;

    Vector3d p = _position;
    QVector<QVector3D> top;
    top << toVector(p + left);
    top << toVector(p - left);
    top << toVector(p - left + back);
    top << toVector(p + left + back);

    drawPolygon(top, QVector3D(0, 0, 1), _color);
}

void EpsCanvas::drawEllipse(const Vector3d &_center, double _width, double _height, double _rotation, const QColor &_color, bool _static)
{
    Vector3d center = _center * 0.5 + Vector3d(1000, 3000);
    double width = _width * 0.5;
    double height = _height * 0.5;

    m_document.drawEllipse(QPointF(center.x, center.y), width, height, _rotation, _color);
}

void EpsCanvas::drawLine(const Vector3d &_from, const Vector3d &_to, double _width, const QColor &_color, bool _static)
{
    Vector3d from = _from * 0.5 + Vector3d(1000, 3000);
    Vector3d to = _to * 0.5 + Vector3d(1000, 3000);

    m_document.startPath();
    m_document.moveTo(from.x, from.y);
    m_document.lineTo(to.x, to.y);
    m_document.closePath();
    m_document.setColor(_color);
    m_document.setLineWidth(_width);
    m_document.stroke();
}

void EpsCanvas::drawShape(const QVector<QVector3D> &_ground, double _height, const QColor &_color)
{
    drawPolygon(_ground, QVector3D(), _color);
}

void EpsCanvas::drawPolygon(const QVector<QVector3D> &_polygon, const QVector3D &_normal, const QColor &_color)
{
    for(int i=0; i<_polygon.size(); i++)
    {
        QVector3D v = _polygon.at(i) * 0.5;

        QPointF p(v.x() + 1000, v.y() + 3000); // CAUTION: eps canvas offset


        if(i==0)
            m_document.moveTo(p);
        else
            m_document.lineTo(p);
    }

    m_document.setColor(_color);
    m_document.fill();
}

QVector<QVector3D> EpsCanvas::findPolygon(const std::vector<Node*> &_nodes)
{
    QVector<QVector3D> polygon;
    for(unsigned int i=0; i<_nodes.size(); i++)
    {
        Vector3d p = _nodes.at(i)->getPosition();
        polygon << QVector3D(p.x, p.y, p.z);
    }
    return polygon;
}

QVector3D EpsCanvas::toVector(const Vector3d &_vector)
{
    return QVector3D(_vector.x, _vector.y, _vector.z);
}

}
