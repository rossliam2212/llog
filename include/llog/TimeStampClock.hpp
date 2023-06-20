//
// Created by Liam Ross on 15/06/2023.
//

#ifndef LLOG_TIMESTAMPCLOCK_HPP
#define LLOG_TIMESTAMPCLOCK_HPP

#include <chrono>
#include <iomanip>
#include <string>
#include <sstream>

namespace llog {
    class TimeStampClock {
    public:
        static std::string now(const char* pattern);
    };
}

#endif //LLOG_TIMESTAMPCLOCK_HPP
