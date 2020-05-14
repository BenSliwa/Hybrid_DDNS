#ifndef DDNSVEHICLE_H
#define DDNSVEHICLE_H

#include "catvehicle.h"


namespace LIMoSim
{


class DDNSVehicle : public CATVehicle
{
public:
    DDNSVehicle(Car *_car, const Policy &_policy, const std::string _mno, const std::string &_direction);

    void initialize();

    CMEntry getContext();
    void handleTransmission(double _prediction_mbits, double _deltaT_s);
    double predictThroughput(double _payload_mb, const CMEntry &_entry);

    static double predict(double _payload_mb, const CMEntry &_entry, const std::string &_mno, const std::string _direction);

private:

};

}

#endif // DDNSVEHICLE_H
