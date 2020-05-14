#ifndef LIMOSIM_RLCAT_H
#define LIMOSIM_RLCAT_H

#include <string>
#include <vector>
#include <map>

namespace LIMoSim
{

namespace ACTION
{
    enum{
        IDLE = 0,
        TRANSMIT = 1,
    };
}

class Policy;

class RLCAT
{
public:
    RLCAT();

    void init(const std::string &_mno, const std::string &_direction);
    void loadTable(const std::string &_file);

    std::string getStateKey(double _deltaT_s, double _prediction, double _prediction_tau, Policy* _policy);
    double getQValue(const std::string &_state, int _action);

    std::map<std::string, std::vector<double>> m_qTable;
    std::string m_state;
};

}

#endif // LIMOSIM_RLCAT_H
