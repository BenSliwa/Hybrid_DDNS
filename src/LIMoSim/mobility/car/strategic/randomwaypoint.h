#ifndef LIMOSIM_RANDOMWAYPOINT_H
#define LIMOSIM_RANDOMWAYPOINT_H

#include "followpath.h"

namespace LIMoSim
{

struct WaypointEntry
{
    std::string intersection;
    std::string road;
};

class RandomWaypoint : public FollowPath
{
public:
    RandomWaypoint(Car *_car);

    void updatePath(Intersection *_intersection, LaneSegment *_lane);

    void updatePathWithNodes(Intersection *_intersection, LaneSegment *_lane);

private:
    Gate* computeRandomDestination();


    std::vector<WaypointEntry> m_waypoints;
};


}

#endif // LIMOSIM_RANDOMWAYPOINT_H
