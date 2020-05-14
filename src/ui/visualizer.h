#ifndef LIMOSIM_VISUALIZER_H
#define LIMOSIM_VISUALIZER_H

#include <QObject>
#include <QDebug>
#include "ui/canvas.h"
#include "LIMoSim/settings/filehandler.h"
#include "LIMoSim/settings/parser.h"
#include "LIMoSim/settings/osm/wgs84.h"
#include "LIMoSim/world/world.h"

namespace LIMoSim
{

namespace VISUALIZER_TYPE
{
    enum{
        STATIC,
        DYNAMIC
    };
}

class Visualizer : public QObject
{
    Q_OBJECT
public:
    Visualizer(int _type, QObject *_parent = 0);

    virtual void update(Canvas *_canvas) = 0;

    int getType();

protected:
    int m_type;

};


}


#endif // LIMOSIM_VISUALIZER_H
