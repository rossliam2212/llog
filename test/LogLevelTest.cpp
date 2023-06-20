//
// Created by Liam Ross on 15/06/2023.
//

#include <catch2/catch_test_macros.hpp>

#include "../include/llog/LogLevel.hpp"

using namespace llog;

TEST_CASE("TEST_logLevelToStringUpper", "[LogLevel]") {
    levels::LogLevel infoLvl{levels::LogLevel::Info};
    REQUIRE(logLevelToStringUpper(infoLvl).compare("INFO") == 0);

    levels::LogLevel debugLvl{levels::LogLevel::Debug};
    REQUIRE(logLevelToStringUpper(debugLvl).compare("DEBUG") == 0);

    levels::LogLevel warningLvl{levels::LogLevel::Warning};
    REQUIRE(logLevelToStringUpper(warningLvl).compare("WARN") == 0);

    levels::LogLevel errorLvl{levels::LogLevel::Error};
    REQUIRE(logLevelToStringUpper(errorLvl).compare("ERROR") == 0);

    levels::LogLevel fatalLvl{levels::LogLevel::Fatal};
    REQUIRE(logLevelToStringUpper(fatalLvl).compare("FATAL") == 0);

    levels::LogLevel none{levels::LogLevel::None};
    REQUIRE(logLevelToStringUpper(none).compare("NONE") == 0);
}

TEST_CASE("TEST_logLevelToStringLower", "[LogLevel]") {
    levels::LogLevel infoLvl{levels::LogLevel::Info};
    REQUIRE(logLevelToStringLower(infoLvl).compare("info") == 0);

    levels::LogLevel debugLvl{levels::LogLevel::Debug};
    REQUIRE(logLevelToStringLower(debugLvl).compare("debug") == 0);

    levels::LogLevel warningLvl{levels::LogLevel::Warning};
    REQUIRE(logLevelToStringLower(warningLvl).compare("warn") == 0);

    levels::LogLevel errorLvl{levels::LogLevel::Error};
    REQUIRE(logLevelToStringLower(errorLvl).compare("error") == 0);

    levels::LogLevel fatalLvl{levels::LogLevel::Fatal};
    REQUIRE(logLevelToStringLower(fatalLvl).compare("fatal") == 0);

    levels::LogLevel none{levels::LogLevel::None};
    REQUIRE(logLevelToStringLower(none).compare("none") == 0);
}

TEST_CASE("TEST_logLevelToStringIdUpper", "[LogLevel]") {
    levels::LogLevel infoLvl{levels::LogLevel::Info};
    REQUIRE(logLevelToStringIdUpper(infoLvl).compare("I") == 0);

    levels::LogLevel debugLvl{levels::LogLevel::Debug};
    REQUIRE(logLevelToStringIdUpper(debugLvl).compare("D") == 0);

    levels::LogLevel warningLvl{levels::LogLevel::Warning};
    REQUIRE(logLevelToStringIdUpper(warningLvl).compare("W") == 0);

    levels::LogLevel errorLvl{levels::LogLevel::Error};
    REQUIRE(logLevelToStringIdUpper(errorLvl).compare("E") == 0);

    levels::LogLevel fatalLvl{levels::LogLevel::Fatal};
    REQUIRE(logLevelToStringIdUpper(fatalLvl).compare("F") == 0);

    levels::LogLevel none{levels::LogLevel::None};
    REQUIRE(logLevelToStringIdUpper(none).compare("N") == 0);
}

TEST_CASE("TEST_logLevelToStringIdLower", "[LogLevel]") {
    levels::LogLevel infoLvl{levels::LogLevel::Info};
    REQUIRE(logLevelToStringIdLower(infoLvl).compare("i") == 0);

    levels::LogLevel debugLvl{levels::LogLevel::Debug};
    REQUIRE(logLevelToStringIdLower(debugLvl).compare("d") == 0);

    levels::LogLevel warningLvl{levels::LogLevel::Warning};
    REQUIRE(logLevelToStringIdLower(warningLvl).compare("w") == 0);

    levels::LogLevel errorLvl{levels::LogLevel::Error};
    REQUIRE(logLevelToStringIdLower(errorLvl).compare("e") == 0);

    levels::LogLevel fatalLvl{levels::LogLevel::Fatal};
    REQUIRE(logLevelToStringIdLower(fatalLvl).compare("f") == 0);

    levels::LogLevel none{levels::LogLevel::None};
    REQUIRE(logLevelToStringIdLower(none).compare("n") == 0);
}