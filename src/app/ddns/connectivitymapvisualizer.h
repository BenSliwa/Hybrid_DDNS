#ifndef LIMOSIM_CONNECTIVITYMAPVISUALIZER_H
#define LIMOSIM_CONNECTIVITYMAPVISUALIZER_H

#include "ui/visualizer.h"
#include "app/ddns/ddns.h"

namespace LIMoSim
{

class ConnectivityMapVisualizer : public Visualizer
{
    Q_OBJECT
public:
    ConnectivityMapVisualizer(QObject *_parent = 0);

    void update(Canvas *_canvas);

};

}

#endif // LIMOSIM_CONNECTIVITYMAPVISUALIZER_H
