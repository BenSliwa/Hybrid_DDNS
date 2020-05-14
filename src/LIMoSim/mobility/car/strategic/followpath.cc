#include "followpath.h"
#include "LIMoSim/world/world.h"
#include "LIMoSim/mobility/car/awareness/intersectionhandler.h"

namespace LIMoSim
{

FollowPath::FollowPath(Car *_car) :
    StrategicModel(_car)
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void FollowPath::initialize()
{
    RoadPosition info = p_car->getRoadPosition();
    IntersectionEntry entry = findNextIntersection(info.laneSegment);
    updatePath(entry.intersection, entry.lane);
}

void FollowPath::handleNodeReached(Node *_node)
{

}

void FollowPath::handleGateReached(Gate *_gate, Intersection *_intersection, LaneSegment *_lane)
{
    RoadPosition info = p_car->getRoadPosition();
    if(info.path.size()>0)
    {
        Gate *gate = info.path.at(0);
        RoadSegment *segment = _intersection->getOutSegmentForGate(gate);

        if(segment) // reached a gate of the path
        {
            // determine the next turn
            IntersectionEntry entry = findNextIntersection(getNextLaneSegment(segment, _intersection, _lane));
            updatePath(entry.intersection, entry.lane);
            info = p_car->getRoadPosition();

            //
            RoadSegment *segment = _intersection->getOutSegmentForGate(gate);
            info.path.erase(info.path.begin());
            info.laneSegment = getNextLaneSegment(segment, _intersection, _lane);
            info.offset_m = 0;
            p_car->setRoadPosition(info);
        }
        else // reached a gate that is not part of the path -> rerouting
        {
            std::cout << "FollowPath::handleGateReached gate is not part of the graph" << std::endl;
        }
    }
}


/*************************************
 *           PRIVATE METHODS         *
 ************************************/

IntersectionEntry FollowPath::findNextIntersection(LaneSegment *_lane)
{
    IntersectionEntry entry;
    entry.intersection = World::getInstance()->getIntersection(_lane->getEndNode());
    entry.lane = _lane;

    while(!entry.intersection && entry.lane->getNext())
    {
        entry.lane = entry.lane->getNext();
        entry.intersection = World::getInstance()->getIntersection(entry.lane->getEndNode());
    }

    return entry;
}


}
