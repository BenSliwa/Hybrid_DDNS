#include "randomdirection.h"
#include "LIMoSim/world/world.h"
#include "LIMoSim/mobility/car/awareness/intersectionhandler.h"
#include <stdlib.h>


namespace LIMoSim
{

RandomDirection::RandomDirection(Car *_car) :
    FollowPath(_car)
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/



/*************************************
 *           PRIVATE METHODS         *
 ************************************/

void RandomDirection::updatePath(Intersection *_intersection, LaneSegment *_lane)
{
    if(_intersection)
    {
        Gate *inGate = _intersection->getInGate(_lane->getSegment());
        RoadSegment *nextSegment = getRandomSegment(inGate, _intersection, _lane);
        Gate *outGate = _intersection->getOutGate(nextSegment);

        RoadPosition info = p_car->getRoadPosition();
        info.path.push_back(outGate);
        p_car->setRoadPosition(info);
    }
    else
        std::cout << "RandomDirection::updatePath failed to determine turn" << std::endl;

}

RoadSegment* RandomDirection::getRandomSegment(Gate *_gate, Intersection *_intersection, LaneSegment *_lane)
{
    RoadSegment* segment = 0;
    std::map<RoadSegment*, Gate*> out = _intersection->getOutGates();
    std::map<RoadSegment*, Gate*>::iterator it = out.begin();

    if(out.size()>0)
    {
        // find the destination gate
        segment = it->first;
        if(out.size()>1)
        {
            if(out.count(_lane->getSegment())>0)
                out.erase(_lane->getSegment());

            int index = rand() * (long)(out.size()) / RAND_MAX;
            it = out.begin();
            for(int i=0; i<index; i++)
                it++;

            segment = it->first;
        }
    }

    return segment;
}



}

