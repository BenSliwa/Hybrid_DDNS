#ifndef LIMOSIM_RANDOMDIRECTION_H
#define LIMOSIM_RANDOMDIRECTION_H

#include "followpath.h"

namespace LIMoSim
{

class RandomDirection : public FollowPath
{
public:
    RandomDirection(Car *_car);


public:
    void updatePath(Intersection *_intersection, LaneSegment *_lane);
    static RoadSegment* getRandomSegment(Gate *_gate, Intersection *_intersection, LaneSegment *_lane);
};

}


#endif // LIMOSIM_RANDOMDIRECTION_H
