#ifndef LIMOSIM_OPENGLCANVAS_H
#define LIMOSIM_OPENGLCANVAS_H

#include "openglrenderer.h"
#include "ui/canvas.h"
#include <QMap>

using namespace LIMoSim;

namespace OpenGL
{

class OpenGLCanvas : public Canvas
{
public:
    OpenGLCanvas();

    // Canvas
    void drawNode(Node *_node);
    void drawRoadSegment(RoadSegment *_segment);
    void drawBuilding(Building *_building);
    void drawVehicle(Vehicle *_vehicle);
    void drawArea(Area *_area);

    //
    void setRenderer(OpenGLRenderer *_renderer);
    QVector3D fromVector(const Vector3d &_vector);

    void drawCube(const Vector3d &_position, float _width, const QColor &_color, bool _static=true);
    void drawEllipse(const Vector3d &_center, double _width, double _height, double _rotation, const QColor &_color, bool _static=true);
    void drawLine(const Vector3d &_from, const Vector3d &_to, double _width, const QColor &_color, bool _static=true);

    void drawHexagon(const Vector3d &_position, float _width, const QColor &_color, bool _static=true);


    OpenGLShape buildTriangle(const Vector3d &_center, double _direction, double _width, double _length);


private:
    OpenGLRenderer *p_renderer;
    QMap<int,QColor> m_colors;
};

}

#endif // OPENGLCANVAS_H
