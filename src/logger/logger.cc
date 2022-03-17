#include <iostream>
#include "logger.h"

void ass::ara::Logger::log(const char *message)
{
    std::cout << message << std::flush;
}

void ass::ara::Logger::lognl(const char *message)
{
    std::cout << message << std::endl;
}

void ass::ara::Logger::log(const std::string& message)
{
    std::cout << message;
}

void ass::ara::Logger::lognl(const std::string& message)
{
    std::cout << message << std::endl;
}

void ass::ara::Logger::err(const char *message)
{
    std::cout << message << std::flush;
}

void ass::ara::Logger::errnl(const char *message)
{
    std::cout << message << std::endl;
}

void ass::ara::Logger::err(const std::string& message)
{
    std::cout << message;
}

void ass::ara::Logger::errnl(const std::string& message)
{
    std::cout << message << std::endl;
}

