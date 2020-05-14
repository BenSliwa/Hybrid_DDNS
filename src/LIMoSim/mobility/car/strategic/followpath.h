#ifndef LIMOSIM_FOLLOWPATH_H
#define LIMOSIM_FOLLOWPATH_H

#include "strategicmodel.h"

namespace LIMoSim
{

struct IntersectionEntry
{
    Intersection *intersection = 0;
    LaneSegment *lane = 0;
};

class FollowPath : public StrategicModel
{
public:
    FollowPath(Car *_car);

    void initialize();
    void handleNodeReached(Node *_node);
    void handleGateReached(Gate *_gate, Intersection *_intersection, LaneSegment *_lane);

    virtual void updatePath(Intersection *_intersection, LaneSegment *_lane) = 0;

private:
    IntersectionEntry findNextIntersection(LaneSegment *_lane);


};

}

#endif // LIMOSIM_FOLLOWPATH_H
