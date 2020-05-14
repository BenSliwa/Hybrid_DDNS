#include "visualizer.h"

namespace LIMoSim
{

Visualizer::Visualizer(int _type, QObject *_parent) :
    QObject(_parent),
    m_type(_type)
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

int Visualizer::getType()
{
    return m_type;
}

}
