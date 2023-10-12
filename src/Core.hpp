#pragma once

#include <vector>

#include "Controller.hpp"

namespace ass {
namespace ara {

class Core
{
public:
    Core(int, char**);
    ~Core();
    int Run();
    void RegisterController();
    void UnregisterController();
private:
    std::vector<Controller> m_controllers;
};

}}
