#ifndef ARA_LOGGER_H
#define ARA_LOGGER_H

#include <string>

namespace ass {
namespace ara {

struct Logger
{
    // Log
    static void log(const char*);
    static void lognl(const char*);
    static void log(const std::string&);
    static void lognl(const std::string&);

    // Err
    static void err(const char*);
    static void errnl(const char*);
    static void err(const std::string&);
    static void errnl(const std::string&);

};

}
}

#endif // ARA_LOGGER_H
