#include "randomwaypoint.h"
#include "LIMoSim/world/world.h"
#include "LIMoSim/mobility/routing/dijkstra.h"
#include <stdlib.h>
#include "randomdirection.h"

namespace LIMoSim
{

RandomWaypoint::RandomWaypoint(Car *_car) :
    FollowPath(_car)
{
    m_waypoints.push_back({"33164233", "60270078"}); // auffahrt a45
    //intersections.push_back("190326723"); // nach auffahrt
    //intersections.push_back("268480975"); // abfahrt wittent
    m_waypoints.push_back({"33165869", "368612810"}); // abfahrt a45

    m_waypoints.push_back({"160385", "30977200"}); // hauert
    m_waypoints.push_back({"273109929", "38182250"}); // otto-hahn x marie-curie
    m_waypoints.push_back({"5617111352", "22779738"}); // am gardenkamp
    m_waypoints.push_back({"3584195222", "53745495"}); // holtbrügge
    m_waypoints.push_back({"60663287", "95418831"}); // durchstr
    //m_waypoints.push_back({"295903858", "39301055"}); // am heisterbach
}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

void RandomWaypoint::updatePath(Intersection *_intersection, LaneSegment *_lane)
{
    return updatePathWithNodes(_intersection, _lane);

    RoadPosition info = p_car->getRoadPosition();
    if(info.path.size()==0) // this is only called during the first initialization
    {
        Gate *inGate = _intersection->getInGate(_lane->getSegment());

        RoadSegment *nextSegment = RandomDirection::getRandomSegment(inGate, _intersection, _lane);
        Gate *outGate = _intersection->getOutGate(nextSegment);

        info.path.push_back(outGate);
        p_car->setRoadPosition(info);
    }

    //

    // compute new path
    if(info.path.size()==1)
    {
        Gate *start = info.path.at(0);
        Gate *destination = 0;

        while(destination==0 || destination==start)
           destination = computeRandomDestination();

        //
        Dijkstra dijkstra;
        std::vector<Routable*> graph = World::getInstance()->buildRoutingGraph();
        dijkstra.setGraph(graph);
        std::vector<Routable*> path = dijkstra.computeShortestPath(start, destination);
        for(unsigned int i=1; i<path.size(); i++)
        {
            Gate *gate = dynamic_cast<Gate*>(path.at(i));
            info.path.push_back(gate);
        }

        //
        p_car->setRoadPosition(info);
    }
}

void RandomWaypoint::updatePathWithNodes(Intersection *_intersection, LaneSegment *_lane)
{
    RoadPosition info = p_car->getRoadPosition();
    if(info.path.size()==0) // this is only called during the first inialization
    {
        Gate *inGate = _intersection->getInGate(_lane->getSegment());

        RoadSegment *nextSegment = RandomDirection::getRandomSegment(inGate, _intersection, _lane);
        Gate *outGate = _intersection->getOutGate(nextSegment);

        info.path.push_back(outGate);
        p_car->setRoadPosition(info);
    }

    // compute new path
    if(info.path.size()==1)
    {
        World *world = World::getInstance();
        Gate *start = info.path.at(0);
        Gate *destination = 0;


        std::vector<Routable*> graph = World::getInstance()->buildRoutingGraph();

        for(unsigned int i=0; i<m_waypoints.size(); i++)
        {
            WaypointEntry entry =  m_waypoints.at(i);


            Intersection *intersection = world->getIntersection(world->getNodeById(entry.intersection)); // otto-hahn-str x marie-curie-allee
            destination = intersection->getOutGateForRoad(world->getRoadById(entry.road));

            //
            Dijkstra dijkstra;
            dijkstra.setGraph(graph);
            std::vector<Routable*> path = dijkstra.computeShortestPath(start, destination);
            for(unsigned int j=1; j<path.size(); j++)
            {
                Gate *gate = dynamic_cast<Gate*>(path.at(j));
                info.path.push_back(gate);
            }
            start = destination;
        }

        //
        p_car->setRoadPosition(info);
    }
}

/*************************************
 *           PRIVATE METHODS         *
 ************************************/


Gate* RandomWaypoint::computeRandomDestination()
{
    std::vector<Routable*> graph = World::getInstance()->buildRoutingGraph();

    int index = rand() * (long)(graph.size()) / RAND_MAX;
    Gate *gate = dynamic_cast<Gate*>(graph.at(index));

    return gate;
}


}
