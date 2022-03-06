#include "core.h"
#include <iostream>

namespace ass {
namespace ara {
    
App::App(unsigned int port, std::string host)
{
    this->m_port = port;
    this->m_host = host;

    std::cout << this->m_port << " " << this->m_host << std::endl;
}

}
}

