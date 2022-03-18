#include <iostream>

#include "core.h"
#include <boost/log/trivial.hpp>

#define NO_PARAMETERS 1

namespace ara = ass::ara;

int main(int argc, char* argv[])
{
    if (argc < 3 || argc > 4)
    {
        BOOST_LOG_TRIVIAL(error) 
            << "Insufficent number of parameters." << std::endl 
            << "Usage: ${APP_NAME} <bind addr> <port> [conf]";

        return NO_PARAMETERS;
    }

    const auto webservice = ara::App();

    BOOST_LOG_TRIVIAL(trace)
        << "${APP_NAME} is running on " << argv[1] << " port: " << argv[2] << std::endl;
    return webservice.Run(
            argv[1],
            std::atoi(argv[2])
        );
}

