//
// Created by Liam Ross on 21/06/2023.
//

#ifndef LLOG_STOPWATCH_HPP
#define LLOG_STOPWATCH_HPP

#include <chrono>

namespace llog {
    class StopWatch {
        using clock = std::chrono::steady_clock;

    public:
        long elapsedMicroseconds() const;
        long elapsedMilliseconds() const;
        long elapsedSeconds() const;
        void reset();

    private:
        std::chrono::time_point<clock> startTimePoint{clock::now()};
    };
}


#endif //LLOG_STOPWATCH_HPP
