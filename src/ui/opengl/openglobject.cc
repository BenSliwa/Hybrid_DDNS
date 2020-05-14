#include "openglobject.h"

namespace OpenGL
{

OpenGLObject::OpenGLObject() :
    m_count(0),
    m_color("white")
{

}
const GLfloat* OpenGLObject::constData() const
{
    return m_data.constData();
}

int OpenGLObject::count() const
{
    return m_count;
}

int OpenGLObject::vertexCount() const
{
    return m_count / 9;
}

void OpenGLObject::add(const QVector3D &v, const QVector3D &n)
{
    int r, g, b;
    m_color.getRgb(&r,&g,&b);

    m_data << v.x() << v.y() << v.z();
    m_data << n.x() << n.y() << n.z();
    m_data << r/255.0 << g/255.0 << b/255.0;

    m_count += 9;
}

void OpenGLObject::triangle(const QVector3D &_v0, const QVector3D &_v1, const QVector3D &_v2, const QVector3D &_n)
{
    add(_v0, _n);
    add(_v1, _n);
    add(_v2, _n);
}

void OpenGLObject::cube(const QVector3D &_v0, const QVector3D &_v1, const QVector3D &_v2, const QVector3D &_v3, float _height)
{
    // draw upper quad
    QVector3D n = QVector3D::normal(QVector3D(_v3.x() - _v0.x(), _v3.y() - _v0.y(), 0.0f), QVector3D(_v1.x() - _v0.x(), _v1.y() - _v0.y(), 0.0f));
    triangle(_v0, _v3, _v1, n);
    triangle(_v2, _v1, _v3, n);

    // draw lower quad
    n = QVector3D::normal(QVector3D(_v0.x() - _v3.x(), _v0.y() - _v3.y(), 0.0f), QVector3D(_v1.x() - _v3.x(), _v1.y() - _v3.y(), 0.0f));
    QVector3D h = QVector3D(0, 0, _height);
    triangle(_v3+h, _v0+h, _v1+h, n);
    triangle(_v1+h, _v2+h, _v3+h, n);
}

void OpenGLObject::extrude(const QVector3D &_v0, const QVector3D &_v1, float _height)
{
    QVector3D n = QVector3D::normal(QVector3D(0.0f, 0.0f, -0.1f), QVector3D(_v1.x() - _v0.x(), _v1.y() - _v0.y(), 0.0f));
    QVector3D h = QVector3D(0, 0, _height);

    triangle(_v0 + h, _v0, _v1 + h, n);
    triangle(_v1, _v1+h, _v0, n);
}

void OpenGLObject::addObject(const OpenGLObject &_object)
{
    m_mutex.lock();

    m_data << _object.getData();
    m_count += _object.count();

    m_mutex.unlock();
}

void OpenGLObject::setColor(const QColor &_color)
{
    m_color = _color;
}

QColor OpenGLObject::getColor() const
{
    return m_color;
}

const QVector<GLfloat>& OpenGLObject::getData() const
{
    return m_data;
}

void OpenGLObject::lock()
{
    m_mutex.lock();
}

void OpenGLObject::unlock()
{
    m_mutex.unlock();
}

void OpenGLObject::clear()
{
    m_data.clear();
    m_count = 0;
}

}
