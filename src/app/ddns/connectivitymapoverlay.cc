#include "connectivitymapvisualizer.h"
#include "ui/export/raytracingheatmap.h"

namespace LIMoSim
{

ConnectivityMapVisualizer::ConnectivityMapVisualizer(QObject *_parent) :
    Visualizer(VISUALIZER_TYPE::STATIC, _parent)
{

}

void ConnectivityMapVisualizer::update(Canvas *_canvas)
{
    qDebug() << "ConnectivityMapVisualizer::update";

    RayTracingHeatMap heatmap;
    DDNS *ddns = DDNS::getInstance();

    std::map<std::string, CMEntry> entries = ddns->getEntries();
    std::map<std::string, CMEntry>::iterator it;
    for(it=entries.begin(); it!=entries.end(); it++)
    {
        CMEntry entry = it->second;
        double w = ddns->getCellWidth() / 2.0;
        Vector3d p(entry.x, entry.y, 0.1);

        QColor color = heatmap.getColor(entry.rsrp, -140, -70);
        _canvas->drawCube(p, w, color);
    }
}

}
