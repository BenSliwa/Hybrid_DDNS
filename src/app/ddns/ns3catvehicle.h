#ifndef NS3CATVEHICLE_H
#define NS3CATVEHICLE_H

#include "catvehicle.h"

namespace LIMoSim
{

class NS3CATVehicle : public CATVehicle
{
public:
    NS3CATVehicle(Car *_car, const Policy &_policy, const std::string _mno, const std::string &_direction);

    void initialize();

    CMEntry getContext();
    void handleTransmission(double _prediction_mbits, double _deltaT_s);
    double predictThroughput(double _payload_mb, const CMEntry &_entry);

};

}

#endif // NS3CATVEHICLE_H
