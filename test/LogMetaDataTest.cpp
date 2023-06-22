//
// Created by Liam Ross on 21/06/2023.
//

#include <catch2/catch_test_macros.hpp>

#include "../include/llog/LogMetaData.hpp"

using namespace llog;

TEST_CASE("TEST_defaultLogMetaData", "[LogMetaData]") {
    LogMetaData lmd;

    REQUIRE(lmd.getLineNumber() == 0);
    REQUIRE(lmd.getFunctionName() == std::string{""});
    REQUIRE(lmd.getFileName() == std::string{""});
}

TEST_CASE("TEST_LogMetaData", "[LogMetaData]") {
    LogMetaData lmd{20, "main", "main.cpp"};

    REQUIRE(lmd.getLineNumber() == 20);
    REQUIRE(lmd.getFunctionName() == std::string{"main"});
    REQUIRE(lmd.getFileName() == std::string{"main.cpp"});
}