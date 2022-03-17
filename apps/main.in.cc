#include <iostream>

#include "core.h"
#include "logger.h"

#define NO_PARAMETERS 1

namespace ara = ass::ara;

int main(int argc, char* argv[])
{
    if (argc < 3 || argc > 4)
    {
        ara::Logger::lognl("Usage: ${APP_NAME} <bind addr> <port> [conf]");

        return NO_PARAMETERS;
    }

    auto webservice = ara::App();

    return webservice.Run(
            argv[1],
            std::atoi(argv[2])
        )
;
}

