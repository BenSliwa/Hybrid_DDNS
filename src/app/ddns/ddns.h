#ifndef DDNS_H
#define DDNS_H

#include "LIMoSim/world/vector3d.h"
#include <map>
#include <vector>
#include "gpr.h"



namespace LIMoSim
{

struct CMEntry
{
    bool isValid;

    // only required for real DDNS
    int x;
    int y;

    // ML features
    float rsrp;
    float rsrq;
    float sinr;
    float cqi;
    float ta;
    float velocity;
    float cellId;
    float f;

    std::string eNB;
};

class DDNS
{
public:
    DDNS();

    static DDNS* getInstance();
    void init(const std::string &_mno);

    CMEntry getEntry(const Vector3d &_position);
    std::string computeCellKey(const Vector3d &_position);

    std::map<std::string, CMEntry> getEntries();

    double getCellWidth();


public:
    double normRnd(double _mu, double _sigma);
    double sample(double _prediction, const std::string &_direction);

private:
    std::map<std::string, CMEntry> m_entries;
    double m_cellWidth_m;

    GPR m_gpr_ul;
    GPR m_gpr_dl;


};

}

#endif // DDNS_H
