#ifndef ARA_CORE_H
#define ARA_CORE_H

#include <string>

namespace ass {
namespace ara {

class App {
public:
    App() = delete;
    App(unsigned int, std::string);

private:
    int m_port;
    std::string m_host;
};

}
}

#endif // ARA_CORE_H

