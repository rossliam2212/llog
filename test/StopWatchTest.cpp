//
// Created by Liam Ross on 21/06/2023.
//

#include <catch2/catch_test_macros.hpp>
#include <thread>

#include "../include/llog/StopWatch.hpp"

using namespace llog;

TEST_CASE("TEST_elapsedMicroseconds", "[StopWatch]") {
    StopWatch sw;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    REQUIRE(sw.elapsedMicroseconds() >= 10000);
}

TEST_CASE("TEST_elapsedMilliseconds", "[StopWatch]") {
    StopWatch sw;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    REQUIRE(sw.elapsedMilliseconds() >= 10);
}

TEST_CASE("TEST_elapsedSeconds", "[StopWatch]") {
    StopWatch sw;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    REQUIRE(sw.elapsedSeconds() == 1);
}

TEST_CASE("TEST_reset", "[StopWatch]") {
    StopWatch sw;
    sw.reset();

    REQUIRE(sw.elapsedMicroseconds() == 0);
    REQUIRE(sw.elapsedMilliseconds() == 0);
    REQUIRE(sw.elapsedSeconds() == 0);
}