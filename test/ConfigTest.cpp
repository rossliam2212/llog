//
// Created by Liam Ross on 15/06/2023.
//

#include <catch2/catch_test_macros.hpp>

#include "../include/llog/Config.hpp"

using namespace llog;

TEST_CASE("TEST_configDefaultValues", "[Config]") {
    Config cfg;
    const char* timeStampPattern{"%d/%m/%y %T"};

    REQUIRE(cfg.getConsoleColorsEnabled() == true);
    REQUIRE(cfg.getUppercaseLogLevels() == true);
    REQUIRE(cfg.getLogLevelAsId() == false);
    REQUIRE(cfg.getFullLogMessageInColor() == false);
    REQUIRE(cfg.getTimeStampPattern() == timeStampPattern);
    REQUIRE(cfg.isInfoLogLevelEnabled() == true);
    REQUIRE(cfg.isDebugLogLevelEnabled() == true);
    REQUIRE(cfg.isWarnLogLevelEnabled() == true);
    REQUIRE(cfg.isErrorLogLevelEnabled() == true);
    REQUIRE(cfg.isFatalLogLevelEnabled() == true);
}

TEST_CASE("TEST_enableConsoleColors", "[Config]") {
    Config cfg;
    cfg.enableConsoleColors();
    REQUIRE(cfg.getConsoleColorsEnabled() == true);
}

TEST_CASE("TEST_disableConsoleColors", "[Config]") {
    Config cfg;
    cfg.disableConsoleColors();
    REQUIRE(cfg.getConsoleColorsEnabled() == false);
}

TEST_CASE("TEST_useUppercaseLogLevels", "[Config]") {
    Config cfg;
    cfg.useUppercaseLogLevels();
    REQUIRE(cfg.getUppercaseLogLevels() == true);
}

TEST_CASE("TEST_useLowercaseLogLevels", "[Config]") {
    Config cfg;
    cfg.useLowercaseLogLevels();
    REQUIRE(cfg.getUppercaseLogLevels() == false);
}

TEST_CASE("TEST_useFullLogLevel", "[Config]") {
    Config cfg;
    cfg.useFullLogLevel();
    REQUIRE(cfg.getLogLevelAsId() == false);
}

TEST_CASE("TEST_useLogLevelId", "[Config]") {
    Config cfg;
    cfg.useLogLevelId();
    REQUIRE(cfg.getLogLevelAsId() == true);
}

TEST_CASE("TEST_displayFullLogInColor", "[Config]") {
    Config cfg;
    cfg.displayFullLogInColor();
    REQUIRE(cfg.getFullLogMessageInColor() == true);
}

TEST_CASE("TEST_displayOnlyLogLevelInColor", "[Config]") {
    Config cfg;
    cfg.displayOnlyLogLevelInColor();
    REQUIRE(cfg.getFullLogMessageInColor() == false);
}

// TODO Update this test when the time stamp pattern check is added
TEST_CASE("TEST_setTimeStampPattern", "[Config]") {
    Config cfg;
    const char* timeStampPattern{"%Y-%m-%d %H:%M:%S"};
    cfg.setTimeStampPattern(timeStampPattern);
    REQUIRE(cfg.getTimeStampPattern() == timeStampPattern);
}

TEST_CASE("TEST_enableInfoLogLevel", "[Config]") {
    Config cfg;
    cfg.enableInfoLogLevel();
    REQUIRE(cfg.isInfoLogLevelEnabled() == true);
}

TEST_CASE("TEST_disableInfoLogLevel", "[Config]") {
    Config cfg;
    cfg.disableInfoLogLevel();
    REQUIRE(cfg.isInfoLogLevelEnabled() == false);
}

TEST_CASE("TEST_enableDebugLogLevel", "[Config]") {
    Config cfg;
    cfg.enableDebugLogLevel();
    REQUIRE(cfg.isDebugLogLevelEnabled() == true);
}

TEST_CASE("TEST_disableDebugLogLevel", "[Config]") {
    Config cfg;
    cfg.disableDebugLogLevel();
    REQUIRE(cfg.isDebugLogLevelEnabled() == false);
}

TEST_CASE("TEST_enableWarnLogLevel", "[Config]") {
    Config cfg;
    cfg.enableWarnLogLevel();
    REQUIRE(cfg.isWarnLogLevelEnabled() == true);
}

TEST_CASE("TEST_disableWarnLogLevel", "[Config]") {
    Config cfg;
    cfg.disableWarnLogLevel();
    REQUIRE(cfg.isWarnLogLevelEnabled() == false);
}

TEST_CASE("TEST_enableErrorLogLevel", "[Config]") {
    Config cfg;
    cfg.enableErrorLogLevel();
    REQUIRE(cfg.isErrorLogLevelEnabled() == true);
}

TEST_CASE("TEST_disableErrorLogLevel", "[Config]") {
    Config cfg;
    cfg.disableErrorLogLevel();
    REQUIRE(cfg.isErrorLogLevelEnabled() == false);
}

TEST_CASE("TEST_enableFatalLogLevel", "[Config]") {
    Config cfg;
    cfg.enableFatalLogLevel();
    REQUIRE(cfg.isFatalLogLevelEnabled() == true);
}

TEST_CASE("TEST_disableFatalLogLevel", "[Config]") {
    Config cfg;
    cfg.disableFatalLogLevel();
    REQUIRE(cfg.isFatalLogLevelEnabled() == false);
}

