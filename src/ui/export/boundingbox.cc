#include "boundingbox.h"

namespace LIMoSim
{

BoundingBox::BoundingBox()
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void BoundingBox::init(const Vector3d &_origin, double _width, double _height)
{
    leftBottom = _origin;
    rightBottom = leftBottom + Vector3d(_width, 0);
    leftTop = leftBottom + Vector3d(0, _height);
    rightTop = rightBottom + Vector3d(0, _height);
}

bool BoundingBox::isInside(const Vector3d &_p)
{
    bool x = (_p.x>=leftBottom.x) && (_p.x<=rightBottom.x);
    bool y = (_p.y>=leftBottom.y) && (_p.y<=leftTop.y);

    if(x && y)
        return true;
    return false;
}

bool BoundingBox::checkCondition(int _var0, int _var1, int _value0, int _value1)
{
    return (_var0==_value0 && _var1==_value1) || (_var0==_value1 && _var1==_value0);
}


}
