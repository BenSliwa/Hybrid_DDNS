#ifndef LIMOSIM_LOGGER_H
#define LIMOSIM_LOGGER_H

#include "filehandler.h"

namespace LIMoSim
{

class Logger
{
public:
    Logger();

    static Logger* getInstance();

    void log(const std::string &_data);
    void setPath(const std::string &_path);


private:
    std::string m_path;
};

}


#endif // LIMOSIM_LOGGER_H
