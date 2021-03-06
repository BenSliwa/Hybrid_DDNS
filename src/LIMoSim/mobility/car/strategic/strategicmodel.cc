#include "strategicmodel.h"


namespace LIMoSim
{

StrategicModel::StrategicModel(Car *_car) :
    p_car(_car)
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void StrategicModel::initialize()
{


}

LaneSegment* StrategicModel::getNextLaneSegment(RoadSegment *_segment, Intersection *_intersection, LaneSegment *_lane)
{
    int dir = LANE_TYPE::FORWARD;
    if(_segment->getToEndpoint()->getNode()==_intersection->getNode())
        dir = LANE_TYPE::BACKWARD;

    int index = _lane->getIndex();
    std::vector<LaneSegment*> lanes = _segment->getLanes(dir);

    if(index<lanes.size())
        return lanes.at(index);
    else if(lanes.size()>0)
        return lanes.at(lanes.size()-1);
    return 0;
}


/*************************************
 *           PRIVATE METHODS         *
 ************************************/


}
