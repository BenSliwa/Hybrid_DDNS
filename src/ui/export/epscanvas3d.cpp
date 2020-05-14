#include "epscanvas3d.h"

namespace LIMoSim
{

EpsCanvas3d::EpsCanvas3d(OpenGLRenderer *_gl) :
    EpsCanvas(),
    p_gl(_gl)
{

}


/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void EpsCanvas3d::save(const QString &_path)
{
    // draw all planes
    QMultiMap<float, Plane>::iterator it;
    for(it=m_planes.begin(); it!=m_planes.end(); it++)
        renderPlane(it.value());

    //
    EpsCanvas::save(_path);

    // clean up
    m_planes.clear();
}

void EpsCanvas3d::renderPlane(const Plane &_plane)
{
    QVector<QVector3D> vertices = _plane.getVertices();
    for(int i=0; i<vertices.size(); i++)
    {
        QVector3D v = vertices.at(i);
        QPointF p(v.x() * 1200, v.y() * 700);
        p += QPointF(1000, 1000);

        if(i==0)
            m_document.moveTo(p);
        else
            m_document.lineTo(p);
    }

    m_document.setColor(_plane.getColor());
    m_document.fill();
}

void EpsCanvas3d::drawShape(const QVector<QVector3D> &_ground, double _height, const QColor &_color)
{
    QVector3D height(0, 0, _height);
    bool clockWise = EarClipping::isClockWise(_ground);
    QVector<QVector3D> top;
    for(int i=0; i<_ground.size(); i++)
        top << _ground.at(i) + height;

    // draw all side planes
    int s = _ground.size();
    for(int i=0; i<s; i++)
    {
        QVector3D v0 = top.at(i);
        QVector3D v1 = top.at((i+1)%s);
        QVector3D v0_l = _ground.at(i);
        QVector3D v1_l = _ground.at((i+1)%s);

        QVector3D dir = (v1-v0).normalized();
        QVector3D n(dir.y(), dir.x(), dir.z());

        if(clockWise)
            n.setY(n.y()*-1);
        else
            n.setX(n.x()*-1);

        // skip the rendering if the object is not visible (n-based)


        QVector<QVector3D> polygon = QVector<QVector3D>() << v0 << v1 << v1_l << v0_l;
        drawPolygon(polygon, n, "darkgray");


        // visualize normal vectors if needed
        /*
        QVector3D p = (v1+v0)/2;
        p.setZ(height.z());
        float w = 1;
        float l = 5;
        QVector<QVector3D> polyN = QVector<QVector3D>() << p+dir*w << p-dir*w << p-dir*w+l*n << p+dir*w+l*n;
        drawPolygon(polyN, n, "blue");*/
    }


    // draw the top plane
    drawPolygon(top, QVector3D(0, 0, 1), _color);
}

void EpsCanvas3d::drawPolygon(const QVector<QVector3D> &_polygon, const QVector3D &_normal, const QColor &_color)
{
    if(_polygon.size()==0)
        return;

    QMatrix4x4 projection = p_gl->computeProjectionMatrix();
    QMatrix4x4 modelView = p_gl->computeModelViewMatrix();

    // blackface culling: do not draw elements that face away from the viewing direction
    QVector3D view = (p_gl->toNDC(_polygon.first()) - p_gl->getEye()).normalized();
    if(QVector3D::dotProduct(view, _normal)>=0)
       return;

    Plane plane;
    for(int i=0; i<_polygon.size(); i++)
    {
        QVector3D vertex = _polygon.at(i);
        vertex = p_gl->toNDC(vertex);

        QVector4D v = vertex.toVector4D(); v.setW(1);
        QVector3D c = p_gl->computeColor(_color);

        v = (projection * modelView * v);

        QVector3D v0 = v.toVector3D() / v.w();

        //
        plane.setColor(p_gl->computeColor(vertex, _normal, c));
        plane.addVertex(v0);
    }
    m_planes.insert(plane.computeZ(), plane);
}


}
