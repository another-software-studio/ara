#include <iostream>

#include "core.h"
#include "logger.h"

#define SUCCESS       0
#define NO_PARAMETERS 1

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        ass::ara::Logger::lognl("# ara is a framework for friendly, simple and efficient building of reliable microservices.");
        ass::ara::Logger::lognl("Usage: ara <bind addr> <port> [conf]");

        return NO_PARAMETERS;
    }

    auto webservice = ass::ara::App(
            std::atoi(argv[1]),
            std::string(argv[1])
        );

    return SUCCESS;
}

