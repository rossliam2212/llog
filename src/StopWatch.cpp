//
// Created by Liam Ross on 21/06/2023.
//

#include "../include/llog/StopWatch.hpp"

namespace llog {
    /**
     * @brief Gets the elapsed time in microseconds since the stop watch started.
     * @return The elapsed time in microseconds since the stop watch started.
     */
    long StopWatch::elapsedMicroseconds() const {
        return std::chrono::duration_cast<std::chrono::microseconds>(clock::now() - startTimePoint).count();
    }

    /**
     * @brief Gets the elapsed time in milliseconds since the stop watch started.
     * @return The elapsed time in milliseconds since the stop watch started.
     */
    long StopWatch::elapsedMilliseconds() const {
        return std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - startTimePoint).count();
    }

    /**
     * @brief Gets the elapsed time in seconds since the stop watch started.
     * @return The elapsed time in seconds since the stop watch started.
     */
    long StopWatch::elapsedSeconds() const {
        return std::chrono::duration_cast<std::chrono::seconds>(clock::now() - startTimePoint).count();
    }

    /**
     * @brief Resets the stopwatch.
     */
    void StopWatch::reset() {
        startTimePoint = clock::now();
    }
}