#ifndef LIMOSIM_ANTENNA_H
#define LIMOSIM_ANTENNA_H

#include <vector>
#include "LIMoSim/world/vector3d.h"

namespace LIMoSim
{

class Antenna
{
public:
    Antenna(const Vector3d &_position = Vector3d(), double _phi = 0);

    void loadPatterns(const std::string &_horizontal, const std::string &_vertical);

    double computeRSS(const Vector3d &_position) const;
    double computeGain(const Vector3d &_position) const;

    static double mW2dBm(double _mW);
    static double dBm2mW(double _dBm);

    Vector3d getPosition() const;


private:
    double computeFactor(double _delta, std::vector<double> _pattern) const;

private:
    Vector3d m_position;

    double m_phi;
    double m_downTilt;
    double m_maxGain_dB;

    double m_f_Hz;
    double m_c;
    double m_alpha;

    std::vector<double> m_horizontalPattern;
    std::vector<double> m_verticalPattern;
};

}

#endif // LIMOSIM_ANTENNA_H
