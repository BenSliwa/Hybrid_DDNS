#include "logger.h"

namespace LIMoSim
{

Logger::Logger()
{

}

/*************************************
 *            PUBLIC METHODS         *
 ************************************/

Logger* Logger::getInstance()
{
    static Logger instance;
    return &instance;
}


void Logger::log(const std::string &_data)
{
    FileHandler::append(_data + "\n", m_path);
}

void Logger::setPath(const std::string &_path)
{
    m_path = _path;

    FileHandler::write("", m_path);
}

}
