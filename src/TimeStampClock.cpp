//
// Created by Liam Ross on 15/06/2023.
//

#include "../include/llog/TimeStampClock.hpp"

namespace llog {
    std::string TimeStampClock::now(const char* pattern) {
        std::ostringstream oss;
        std::chrono::system_clock::time_point timeNow{std::chrono::system_clock::now()};
        std::time_t now_c{std::chrono::system_clock::to_time_t(timeNow)};
        const std::tm* timePtr{std::localtime(&now_c)};
        oss << std::put_time(timePtr, pattern);

        return oss.str();
    }
}