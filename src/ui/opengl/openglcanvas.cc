#include "openglcanvas.h"
#include "openglshape.h"

QString BUILDING_COLOR = "#38383D";
QString ROAD_COLOR = "#0077B5";

namespace OpenGL
{

OpenGLCanvas::OpenGLCanvas() :
    Canvas(),
    p_renderer(0)
{
    m_colors[ROAD_TYPE::MOTORWAY] = "#e892a2";
    m_colors[ROAD_TYPE::MOTORWAY_LINK] = "#e892a2";
    m_colors[ROAD_TYPE::MOTORWAY_JUNCTION] = "#e892a2";
    m_colors[ROAD_TYPE::TRUNK] = "#f9b29c";
    m_colors[ROAD_TYPE::TRUNK_LINK] = "#f9b29c";
    m_colors[ROAD_TYPE::PRIMARY] = "#fcd6a4";
    m_colors[ROAD_TYPE::SECONDARY] = "#f7fabf";
    m_colors[ROAD_TYPE::TERTIARY] = "white";
    m_colors[ROAD_TYPE::RESIDENTIAL] = "white";
    m_colors[ROAD_TYPE::SERVICE] = "white";
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void OpenGLCanvas::drawNode(Node *_node)
{
    if(p_world->getIntersection(_node))
        drawCube(_node->getPosition(), 1.5, "yellow");
    else
        drawCube(_node->getPosition(), 1.5, "red");
}

void OpenGLCanvas::drawRoadSegment(RoadSegment *_segment)
{
    Endpoint *from = _segment->getFromEndpoint();
    Endpoint *to = _segment->getToEndpoint();


    std::vector<LaneSegment*> forwardLanes = _segment->getLanes(LANE_TYPE::FORWARD);
    for(unsigned int j=0; j<forwardLanes.size(); j++)
    {
        LaneSegment* lane = forwardLanes.at(j);

        Vector3d to = lane->getEnd();
        Vector3d from = lane->getStart();
        Vector3d dir = (to-from).normed();
        double w = 0.25;

        /*
        OpenGL::Shape s("white");
        s.vertices << ndcFromVector(from + dir.rotateLeft() * w) << ndcFromVector(from + dir.rotateRight() * w);
        s.vertices << ndcFromVector(to + dir.rotateRight() * w) << ndcFromVector(to + dir.rotateLeft() * w);
        p_renderer->drawShape(s);*/
    }


    std::vector<LaneSegment*> backwardLanes = _segment->getLanes(LANE_TYPE::BACKWARD);
    for(unsigned int j=0; j<backwardLanes.size(); j++)
    {
        LaneSegment* lane = backwardLanes.at(j);

        Vector3d to = lane->getEnd();
        Vector3d from = lane->getStart();
        Vector3d dir = (to-from).normed();
        double w = 0.25;

        /*
        OpenGL::Shape s("green");
        s.vertices << ndcFromVector(from + dir.rotateLeft() * w) << ndcFromVector(from + dir.rotateRight() * w);
        s.vertices << ndcFromVector(to + dir.rotateRight() * w) << ndcFromVector(to + dir.rotateLeft() * w);
        p_renderer->drawShape(s);*/
    }



    OpenGLShape shape(ROAD_COLOR);

    shape.addVertex(QVector3D(fromVector(from->leftVertex)));
    shape.addVertex(QVector3D(fromVector(from->rightVertex)));
    shape.addVertex(QVector3D(fromVector(to->rightVertex)));
    shape.addVertex(QVector3D(fromVector(to->leftVertex)));
    p_renderer->drawCube(shape, 0);
}

QVector3D OpenGLCanvas::fromVector(const Vector3d &_vector)
{
    return QVector3D(_vector.x, _vector.y, _vector.z);
}

void OpenGLCanvas::drawCube(const Vector3d &_position, float _width, const QColor &_color, bool _static)
{
    float x = _position.x;
    float y = _position.y;
    float z = _position.z;
    float w = _width;

    OpenGLShape shape(_color);
    shape.addVertex(QVector3D(x-w, y-w, z));
    shape.addVertex(QVector3D(x-w, y+w, z));
    shape.addVertex(QVector3D(x+w, y+w, z));
    shape.addVertex(QVector3D(x+w, y-w, z));

    p_renderer->drawPolygon(shape, _position.z, _static);
}

void OpenGLCanvas::drawEllipse(const Vector3d &_center, double _width, double _height, double _rotation, const QColor &_color, bool _static)
{

}

void OpenGLCanvas::drawLine(const Vector3d &_from, const Vector3d &_to, double _width, const QColor &_color, bool _static)
{
    QVector3D from = fromVector(_from);
    QVector3D to = fromVector(_to);

    QVector3D dir = (to-from).normalized();
    dir = QVector3D(-dir.y(), dir.x(), 0);

    OpenGLShape shape(_color);
    shape.addVertex(from + _width*dir);
    shape.addVertex(from - _width*dir);
    shape.addVertex(to - _width*dir);
    shape.addVertex(to + _width*dir);

    p_renderer->drawPolygon(shape, 1, _static);
}

void OpenGLCanvas::drawHexagon(const Vector3d &_position, float _width, const QColor &_color, bool _static)
{
    // hexagon: r = 0.5*R*sqrt(3)

    QVector3D center = fromVector(_position);
    double inc = 60.0;

    OpenGLShape shape(_color);
    for(int i=0; i<6; i++)
    {
        Vector3d v = Vector3d::fromSphere(90, inc*i, _width);
        shape.addVertex(center + fromVector(v));
    }

    p_renderer->drawPolygon(shape, 0.01, _static);
}

void OpenGLCanvas::drawBuilding(Building *_building)
{
    std::vector<Node*> nodes = _building->getNodes();
    if(nodes.size()>1)
    {
        OpenGLShape shape(BUILDING_COLOR);
        for(unsigned int i=0; i<nodes.size()-1; i++)
        {
            Vector3d position = nodes.at(i)->getPosition();
            shape.addVertex(fromVector(position));
        }
        p_renderer->drawPolygon(shape, _building->getHeight()/2);
    }
}

void OpenGLCanvas::drawVehicle(Vehicle *_vehicle)
{

}

void OpenGLCanvas::drawArea(Area *_area)
{
    std::vector<Node*> nodes = _area->getNodes();
    if(nodes.size()>1)
    {
        OpenGLShape shape("blue");
        for(unsigned int i=0; i<nodes.size()-1; i++)
        {
            Vector3d position = nodes.at(i)->getPosition();
            shape.addVertex(fromVector(position));
        }
        p_renderer->drawPolygon(shape, 0);
    }
}


void OpenGLCanvas::setRenderer(OpenGLRenderer *_renderer)
{
    p_renderer = _renderer;
}

OpenGLShape OpenGLCanvas::buildTriangle(const Vector3d &_center, double _direction, double _width, double _length)
{
    OpenGLShape shape("white");

    Vector3d dir = Vector3d::fromSphere(90, _direction, _length/2);
    Vector3d front = _center + dir;
    Vector3d foot = _center - dir;

    dir = dir.rotateRight().normed() * _width/2;
    Vector3d left = foot - dir;
    Vector3d right = foot + dir;

    shape.addVertex(fromVector(front));
    shape.addVertex(fromVector(left));
    shape.addVertex(fromVector(right));

    p_renderer->drawPolygon(shape, 0.1, false);

    return shape;
}

}
