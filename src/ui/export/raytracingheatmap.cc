#include "raytracingheatmap.h"
#include <math.h>
#include "LIMoSim/settings/filehandler.h"
#include "LIMoSim/settings/osm/wgs84.h"
#include <algorithm>

namespace LIMoSim
{

RayTracingHeatMap::RayTracingHeatMap(QObject *_parent) :
    QObject(_parent)
{
    m_colorMap << QColor(0.000000, 0.000000, 143.437500);
    m_colorMap << QColor(0.000000, 0.000000, 159.375000);
    m_colorMap << QColor(0.000000, 0.000000, 175.312500);
    m_colorMap << QColor(0.000000, 0.000000, 191.250000);
    m_colorMap << QColor(0.000000, 0.000000, 207.187500);
    m_colorMap << QColor(0.000000, 0.000000, 223.125000);
    m_colorMap << QColor(0.000000, 0.000000, 239.062500);
    m_colorMap << QColor(0.000000, 0.000000, 255.000000);
    m_colorMap << QColor(0.000000, 15.937500, 255.000000);
    m_colorMap << QColor(0.000000, 31.875000, 255.000000);
    m_colorMap << QColor(0.000000, 47.812500, 255.000000);
    m_colorMap << QColor(0.000000, 63.750000, 255.000000);
    m_colorMap << QColor(0.000000, 79.687500, 255.000000);
    m_colorMap << QColor(0.000000, 95.625000, 255.000000);
    m_colorMap << QColor(0.000000, 111.562500, 255.000000);
    m_colorMap << QColor(0.000000, 127.500000, 255.000000);
    m_colorMap << QColor(0.000000, 143.437500, 255.000000);
    m_colorMap << QColor(0.000000, 159.375000, 255.000000);
    m_colorMap << QColor(0.000000, 175.312500, 255.000000);
    m_colorMap << QColor(0.000000, 191.250000, 255.000000);
    m_colorMap << QColor(0.000000, 207.187500, 255.000000);
    m_colorMap << QColor(0.000000, 223.125000, 255.000000);
    m_colorMap << QColor(0.000000, 239.062500, 255.000000);
    m_colorMap << QColor(0.000000, 255.000000, 255.000000);
    m_colorMap << QColor(15.937500, 255.000000, 239.062500);
    m_colorMap << QColor(31.875000, 255.000000, 223.125000);
    m_colorMap << QColor(47.812500, 255.000000, 207.187500);
    m_colorMap << QColor(63.750000, 255.000000, 191.250000);
    m_colorMap << QColor(79.687500, 255.000000, 175.312500);
    m_colorMap << QColor(95.625000, 255.000000, 159.375000);
    m_colorMap << QColor(111.562500, 255.000000, 143.437500);
    m_colorMap << QColor(127.500000, 255.000000, 127.500000);
    m_colorMap << QColor(143.437500, 255.000000, 111.562500);
    m_colorMap << QColor(159.375000, 255.000000, 95.625000);
    m_colorMap << QColor(175.312500, 255.000000, 79.687500);
    m_colorMap << QColor(191.250000, 255.000000, 63.750000);
    m_colorMap << QColor(207.187500, 255.000000, 47.812500);
    m_colorMap << QColor(223.125000, 255.000000, 31.875000);
    m_colorMap << QColor(239.062500, 255.000000, 15.937500);
    m_colorMap << QColor(255.000000, 255.000000, 0.000000);
    m_colorMap << QColor(255.000000, 239.062500, 0.000000);
    m_colorMap << QColor(255.000000, 223.125000, 0.000000);
    m_colorMap << QColor(255.000000, 207.187500, 0.000000);
    m_colorMap << QColor(255.000000, 191.250000, 0.000000);
    m_colorMap << QColor(255.000000, 175.312500, 0.000000);
    m_colorMap << QColor(255.000000, 159.375000, 0.000000);
    m_colorMap << QColor(255.000000, 143.437500, 0.000000);
    m_colorMap << QColor(255.000000, 127.500000, 0.000000);
    m_colorMap << QColor(255.000000, 111.562500, 0.000000);
    m_colorMap << QColor(255.000000, 95.625000, 0.000000);
    m_colorMap << QColor(255.000000, 79.687500, 0.000000);
    m_colorMap << QColor(255.000000, 63.750000, 0.000000);
    m_colorMap << QColor(255.000000, 47.812500, 0.000000);
    m_colorMap << QColor(255.000000, 31.875000, 0.000000);
    m_colorMap << QColor(255.000000, 15.937500, 0.000000);
    m_colorMap << QColor(255.000000, 0.000000, 0.000000);
    m_colorMap << QColor(239.062500, 0.000000, 0.000000);
    m_colorMap << QColor(223.125000, 0.000000, 0.000000);
    m_colorMap << QColor(207.187500, 0.000000, 0.000000);
    m_colorMap << QColor(191.250000, 0.000000, 0.000000);
    m_colorMap << QColor(175.312500, 0.000000, 0.000000);
    m_colorMap << QColor(159.375000, 0.000000, 0.000000);
    m_colorMap << QColor(143.437500, 0.000000, 0.000000);
    m_colorMap << QColor(127.500000, 0.000000, 0.000000);

    m_cellSize_m = 12.7207;
    m_fontSize = 40;
    m_tickSize = 40;
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void RayTracingHeatMap::exportFromFile(const QString &_path, const Vector3d &_origin, int _rows, int _columns, double _min, double _max)
{
    World *world = World::getInstance();
    m_worldOrigin = world->getReference();
    m_reference = WGS84::computeOffset(_origin, m_worldOrigin);

    m_width = _columns*m_cellSize_m;
    m_height = _rows*m_cellSize_m;
    m_box.init(Vector3d(200, 100, 0), m_width, m_height);



    // export the eps

    m_eps.init(m_box.leftBottom.x * 2 + m_width, m_box.leftBottom.y * 2 + m_height);


    // TODO: iterate over lines, compute x/y from lat/lon
    std::vector<std::string> lines = FileHandler::read(_path.toStdString());
    for(unsigned int i=0; i<lines.size(); i++)
    {
        if(lines.at(i).size()>1)
        {
            int x = i % _columns;
            int y = i / _columns;
            double value = atof(lines.at(i).c_str());
            QColor color = getColor(value, _min, _max);

            if(value==0)
                color = "black";

            drawCell(x, y, color);
        }
    }





    drawBuildings();
    drawAxis(10);
    drawColorBar(_min, _max);



    Vector3d tx = WGS84::computeOffset(Vector3d(12.523481, 55.7846702), m_worldOrigin);
    m_eps.drawCircle(getCanvasPoint(tx), 15, "lightgray");

    m_eps.save("_rt.eps");
}

/*************************************
 *           PRIVATE METHODS         *
 ************************************/

void RayTracingHeatMap::drawCell(int _x, int _y, const QColor &_color)
{
    m_eps.drawSquare(QPointF(m_box.leftBottom.x + _x*m_cellSize_m + m_cellSize_m/2, m_box.leftBottom.y + _y*m_cellSize_m + m_cellSize_m/2), m_cellSize_m, _color);
}

void RayTracingHeatMap::drawCircle(const Vector3d &_center)
{
    World *world = World::getInstance();
    Vector3d boxMin = world->getBoxMin();
    m_eps.drawCircle(QPointF(m_box.leftBottom.x + _center.x - boxMin.x, m_box.leftBottom.y + _center.y - boxMin.y), 3);
}


void RayTracingHeatMap::drawBuildings()
{
    std::map<std::string, Building*> buildings = World::getInstance()->getBuildings();
    for(std::map<std::string, Building*>::iterator it=buildings.begin(); it!=buildings.end(); it++)
    {
        Building *building = it->second;
        drawPolygon(building->getNodes(), "#1c1c1c");
    }
}

void RayTracingHeatMap::drawPolygon(const std::vector<Node*> &_nodes, const QString &_color)
{
    int index = findFirstNodeInside(_nodes);
    if(index>-1)
    {
        m_eps.startPath();
        Vector3d lastPosition = getCanvasPosition(_nodes[index]->getPosition());
        int lastIntersectionType = INTERSECTION_TYPE::NONE;
        m_eps.moveTo(getCanvasPoint(lastPosition));

        bool wasIn = true;
        for(unsigned int i=0; i<_nodes.size(); i++)
        {
            int nodeIndex = (i + index + 1) % _nodes.size();
            Vector3d p = getCanvasPosition(_nodes[nodeIndex]->getPosition());

            bool isIn = m_box.isInside(p);
            if(wasIn && isIn) // regular
                m_eps.lineTo(getCanvasPoint(p));
            else if((wasIn && !isIn) || (!wasIn && isIn)) // in <-> out transition
            {
                Vector3d origin = lastPosition;
                Vector3d dir = p - lastPosition;

                // check intersections to all boundinx box axes
                int intersectionType = INTERSECTION_TYPE::NONE;
                Vector3d intersection = checkIntersection(origin, dir, m_box.leftTop, m_box.rightTop);
                if(intersection.valid)
                    intersectionType = INTERSECTION_TYPE::TOP;
                else
                {
                    intersection = checkIntersection(origin, dir, m_box.leftBottom, m_box.rightBottom);
                    if(intersection.valid)
                        intersectionType = INTERSECTION_TYPE::BOTTOM;
                    else
                    {
                        intersection = checkIntersection(origin, dir, m_box.leftBottom, m_box.leftTop);
                        if(intersection.valid)
                            intersectionType = INTERSECTION_TYPE::LEFT;
                        else
                        {
                            intersection = checkIntersection(origin, dir, m_box.rightBottom, m_box.rightTop);
                            if(intersection.valid)
                                intersectionType = INTERSECTION_TYPE::RIGHT;
                        }
                    }
                }

                if(intersection.valid)
                {
                    if(isIn)
                    {
                        Vector3d intermediate;
                        if(m_box.checkCondition(intersectionType, lastIntersectionType, INTERSECTION_TYPE::TOP, INTERSECTION_TYPE::LEFT))
                            intermediate = m_box.leftTop;
                        else if(m_box.checkCondition(intersectionType, lastIntersectionType, INTERSECTION_TYPE::TOP, INTERSECTION_TYPE::RIGHT))
                            intermediate = m_box.rightTop;
                        else if(m_box.checkCondition(intersectionType, lastIntersectionType, INTERSECTION_TYPE::BOTTOM, INTERSECTION_TYPE::LEFT))
                            intermediate = m_box.leftBottom;
                        else if(m_box.checkCondition(intersectionType, lastIntersectionType, INTERSECTION_TYPE::BOTTOM, INTERSECTION_TYPE::RIGHT))
                            intermediate = m_box.rightBottom;
                        else
                            intermediate.valid = false;

                        if(intermediate.valid)
                            m_eps.lineTo(getCanvasPoint(intermediate));

                        m_eps.lineTo(getCanvasPoint(intersection));
                        m_eps.lineTo(getCanvasPoint(p));
                    }
                    else
                        m_eps.lineTo(getCanvasPoint(intersection));
                }
                wasIn = isIn;
                lastIntersectionType = intersectionType;
            }

            lastPosition = p;
        }

        m_eps.closePath();
        m_eps.setColor(_color);
        m_eps.fill();
    }
}

int RayTracingHeatMap::findFirstNodeInside(const std::vector<Node*> &_nodes)
{
    int index = -1;
    for(unsigned int i=0; i<_nodes.size(); i++)
    {
        if(m_box.isInside(getCanvasPosition(_nodes[i]->getPosition())))
        {
            index = i;
            break;
        }
    }

    return index;
}

Vector3d RayTracingHeatMap::checkIntersection(const Vector3d &_origin, const Vector3d &_dir, const Vector3d &_p0, const Vector3d &_p1)
{
    Vector3d intersection;
    intersection.valid = false;

    Vector3d v1 = _origin - _p0;
    Vector3d v2 = _p1 - _p0;
    Vector3d v3(-_dir.y, _dir.x);

    double d = v2.cross2d(v1);
    double t1 = d / (v2*v3);
    double t2 = (v1*v3) / (v2*v3);

    if(t1>=0 && t2<=1 && t2>=0)
    {
        Vector3d point = _origin + _dir * t1;

        // is the point between p0 and p1?
        Vector3d p0 = _origin;
        Vector3d p1 = _origin + _dir;
        double epsilon = fabs((p1-p0).norm()-((p0-point).norm()+(p1-point).norm()));
        if(epsilon< 0.001 )
        {
            intersection = point;
            intersection.valid = true;
        }

    }
    return intersection;
}

Vector3d RayTracingHeatMap::getCanvasPosition(const Vector3d &_position)
{
    return _position - m_worldOrigin - m_reference + m_box.leftBottom;
}

QPointF RayTracingHeatMap::getCanvasPoint(const Vector3d &_position)
{
    return QPointF(_position.x, _position.y);
}

void RayTracingHeatMap::drawAxis(int _steps)
{
    // drawBoundingBox
    m_eps.startPath();
    m_eps.moveTo(m_box.leftBottom.x, m_box.leftBottom.y);
    m_eps.lineTo(m_box.leftBottom.x, m_box.leftBottom.y+m_height);
    m_eps.lineTo(m_box.leftBottom.x+m_width, m_box.leftBottom.y+m_height);
    m_eps.lineTo(m_box.leftBottom.x+m_width, m_box.leftBottom.y);
    m_eps.closePath();
    m_eps.setColor("black");
    m_eps.stroke();

    int l = 5;
    for(int i=0; i<(int)m_width/(m_cellSize_m*_steps); i++)
    {
        double x = m_box.leftBottom.x + i * m_cellSize_m * _steps;
        m_eps.startPath();
        m_eps.moveTo(x, m_box.leftBottom.y + l);
        m_eps.lineTo(x, m_box.leftBottom.y - l);
        m_eps.closePath();
        m_eps.setColor("black");
        m_eps.stroke();

        m_eps.text(QString::number(i*_steps), m_tickSize, x, m_box.leftBottom.y-m_tickSize, 0, Qt::AlignHCenter);
    }

    for(int i=0; i<(int)m_height/(m_cellSize_m*_steps); i++)
    {
        double y = m_box.leftBottom.y + i * m_cellSize_m * _steps;
        m_eps.startPath();
        m_eps.moveTo(m_box.leftBottom.x + l, y);
        m_eps.lineTo(m_box.leftBottom.x - l, y);
        m_eps.closePath();
        m_eps.setColor("black");
        m_eps.stroke();

        m_eps.text(QString::number(i*_steps), m_tickSize, m_box.leftBottom.x-m_tickSize/2, y, 0, Qt::AlignRight);
    }

    m_eps.text("Longitudinal Cells", m_fontSize, m_box.leftBottom.x + m_width/2, m_box.leftBottom.y - m_fontSize*2, 0, Qt::AlignHCenter);
    m_eps.text("Latitudinal Cells", m_fontSize, m_box.leftBottom.x - m_fontSize*2, m_box.leftBottom.y + m_height/2, 90, Qt::AlignHCenter);
}

void RayTracingHeatMap::drawColorBar(double _min, double _max)
{
    double w = 30;
    double h = m_height / 64.0;
    double x = m_box.leftBottom.x + m_width + 20;
    double y = m_box.leftBottom.y;

    // drawBoundingBox
    m_eps.startPath();
    m_eps.moveTo(x, y);
    m_eps.lineTo(x, y+m_height);
    m_eps.lineTo(x+w, y+m_height);
    m_eps.lineTo(x+w, y);
    m_eps.closePath();
    m_eps.setColor("black");
    m_eps.stroke();


    for(int i=0; i<64; i++)
    {
        m_eps.startPath();
        m_eps.moveTo(x, y + i*h);
        m_eps.lineTo(x, y + (i+1)*h);
        m_eps.lineTo(x + w, y + (i+1)*h);
        m_eps.lineTo(x + w, y + i*h);

        m_eps.closePath();
        m_eps.setColor(m_colorMap.at(i));
        m_eps.fill();
    }

    int steps = 12;
    double stepHeight = m_height/(double)steps;
    int l = 5;
    for(int i=0; i<steps+1; i++)
    {
        double y = m_box.leftBottom.y + i * stepHeight;
        m_eps.startPath();
        m_eps.moveTo(x + w + l, y);
        m_eps.lineTo(x + w - l, y);
        m_eps.closePath();
        m_eps.setColor("black");
        m_eps.stroke();

        int value = _min + i * (_max-_min) / (steps);
        m_eps.text(QString::number(value), m_tickSize, x + w + 2 * l, y, 0, Qt::AlignLeft);
    }


    m_eps.text("RSRP [dBm]", m_fontSize, x + w + m_fontSize*3, m_box.leftBottom.y + m_height/2, -90, Qt::AlignHCenter);
}

double RayTracingHeatMap::computeRSRP(const Antenna &_antenna, const Vector3d &_rx)
{
    Raytracing rayTracing;
    double beta = 2.4;
    double gamma = 0.63;

    RayTrace trace = rayTracing.trace(_antenna.getPosition(), _rx);
    double L_obs = trace.intersections.size() * beta + trace.attenuated_m * gamma;
    double rss = _antenna.computeRSS(_rx);
    double rsrp = rss - L_obs;

    return rsrp;
}

QColor RayTracingHeatMap::getColor(double _value, double _min, double _max)
{
    int index = (_value-_min) * 63.0 / (_max-_min);
    if(index<0)
        index = 0;
    if(index>63)
        index = 63;

    return m_colorMap.at(index);
}

}
