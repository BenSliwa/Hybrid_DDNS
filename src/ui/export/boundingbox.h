#ifndef LIMOSIM_BOUNDINGBOX_H
#define LIMOSIM_BOUNDINGBOX_H

#include "LIMoSim/world/vector3d.h"

namespace LIMoSim
{

namespace INTERSECTION_TYPE
{
    enum{
        NONE,
        LEFT,
        RIGHT,
        BOTTOM,
        TOP
    };
}

class BoundingBox
{
public:
    BoundingBox();

    void init(const Vector3d &_origin, double _width, double _height);

    bool isInside(const Vector3d &_p);
    bool checkCondition(int _var0, int _var1, int _value0, int _value1);



public:
    Vector3d leftBottom;
    Vector3d leftTop;
    Vector3d rightBottom;
    Vector3d rightTop;
};

}

#endif // LIMOSIM_BOUNDINGBOX_H
