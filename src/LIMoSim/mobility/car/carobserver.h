#ifndef CAROBSERVER_H
#define CAROBSERVER_H

namespace LIMoSim
{

class Car;
class Node;

class CarObserver
{
public:
    CarObserver(Car *_car);

    virtual void handleNodeReached(Node *_node) = 0;

protected:
    Car *p_car;
};

}

#endif // CAROBSERVER_H
