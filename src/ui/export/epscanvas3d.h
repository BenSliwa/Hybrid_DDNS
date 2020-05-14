#ifndef EPSCANVAS3D_H
#define EPSCANVAS3D_H

#include "epscanvas.h"
#include "ui/opengl/openglrenderer.h"
#include "ui/opengl/earclipping.h"
#include <QMultiMap>
#include "plane.h"

using namespace OpenGL;

namespace LIMoSim
{

class EpsCanvas3d : public EpsCanvas
{
public:
    EpsCanvas3d(OpenGLRenderer *_gl);

    virtual void save(const QString &_path);

    //
    void renderPlane(const Plane &_plane);
    virtual void drawShape(const QVector<QVector3D> &_ground, double _height, const QColor &_color);
    virtual void drawPolygon(const QVector<QVector3D> &_polygon, const QVector3D &_normal, const QColor &_color);


private:
    OpenGLRenderer *p_gl;
    QMultiMap<float, Plane> m_planes;

};

}

#endif // EPSCANVAS3D_H
