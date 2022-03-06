#ifndef ARA_LOGGER_H
#define ARA_LOGGER_H

#include <string>

namespace ass {
namespace ara {

struct Logger
{
    static void log(const char*);
    static void lognl(const char*);
    static void log(const std::string&);
    static void lognl(const std::string&);
};

}
}

#endif // ARA_LOGGER_H
