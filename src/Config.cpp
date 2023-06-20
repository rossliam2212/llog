//
// Created by Liam Ross on 15/06/2023.
//

#include "../include/llog/Config.hpp"

namespace llog {
    /**
     * @brief Enables log level console colors.
     *
     * <b>Note:</b> By default, the log level console colors are enabled.
     */
    void Config::enableConsoleColors() {
        consoleColorsEnabled = true;
    }

    /**
     * @brief Disables log level console colors.
     *
     * <b>Note:</b> By default, the log level console colors are enabled.
     */
    void Config::disableConsoleColors() {
        consoleColorsEnabled = false;
    }

    /**
     * @brief Sets the log levels to be printed in uppercase.
     *
     * <b>Note:</b> By default, log levels are uppercase.
     */
    void Config::useUppercaseLogLevels() {
        uppercaseLogLevels = true;
    }

    /**
     * @brief Sets the log levels to be printed in lowercase.
     *
     * <b>Note:</b> By default, log levels are uppercase.
     */
    void Config::useLowercaseLogLevels() {
        uppercaseLogLevels = false;
    }

    /**
     * @brief Sets the log levels to be printed in full.
     */
    void Config::useFullLogLevel() {
        logLevelAsId = false;
    }

    /**
     * @brief Sets the log levels to be printed as their ID's.
     */
    void Config::useLogLevelId() {
        logLevelAsId = true;
    }

    /**
     * @brief Sets the log message to be printed in full color.
     *
     * <b>Note:</b> By default, only the log level will be printed in color.
     * This is also depended on whether the the console colors are enabled or not.
     */
    void Config::displayFullLogInColor() {
        fullLogMessageInColor = true;
    }

    /**
     * @brief Sets only the log level to be printed in color.
     *
     * <b>Note:</b> By default, this is @c true and only the log level will be printed in color.
     * This is also depended on whether the the console colors are enabled or not.
     */
    void Config::displayOnlyLogLevelInColor() {
        fullLogMessageInColor = false;
    }

    /**
     * @brief Sets the pattern for the log message time stamp.
     *
     * <b>Note:</b> The default time stamp pattern: @c "%d/%m/%y %T".
     * <br>
     * <b>Example:</b> @c 01/01/23 00:00:00
     * @param pattern
     *          The time stamp pattern to set.
     */
    void Config::setTimeStampPattern(const char* pattern) {
        // TODO Add check for pattern
        timeStampPattern = pattern;
    }

    /**
     * @brief Gets whether the console colors have been enabled.
     * @return @c true if the console colors have been enabled, @c false otherwise.
     */
    bool Config::getConsoleColorsEnabled() const {
        return consoleColorsEnabled;
    }

    /**
     * @brief Gets whether the log levels should be printed in uppercase.
     * @return @c true if the log levels should be printed in uppercase, @c false otherwise.
     */
    bool Config::getUppercaseLogLevels() const {
        return uppercaseLogLevels;
    }

    /**
     * @brief Gets whether the log levels should be printed in full or only the ID.
     * @return @c true if the log levels should be printed as the ID, @c false otherwise.
     */
    bool Config::getLogLevelAsId() const {
        return logLevelAsId;
    }

    /**
     * @brief Gets whether the full log message should be printed in color.
     * @return @c true if the full log message should printed in color, @c false otherwise.
     */
    bool Config::getFullLogMessageInColor() const {
        return fullLogMessageInColor;
    }

    /**
     * @brief Gets the log message time stamp pattern.
     * @return The log message time stamp pattern.
     */
    const char* Config::getTimeStampPattern() const {
        return timeStampPattern;
    }

    /**
     * @brief Enables the @c INFO log level.
     */
    void Config::enableInfoLogLevel() {
        infoLevelEnabled = true;
    }

    /**
     * @brief Disables the @c INFO log level.
     */
    void Config::disableInfoLogLevel() {
        infoLevelEnabled = false;
    }

    /**
     * @brief Enables the @c DEBUG log level.
     */
    void Config::enableDebugLogLevel() {
        debugLevelEnabled = true;
    }

    /**
     * @brief Disables the @c DEBUG log level.
     */
    void Config::disableDebugLogLevel() {
        debugLevelEnabled = false;
    }

    /**
     * @brief Enables the @c WARN log level.
     */
    void Config::enableWarnLogLevel() {
        warnLevelEnabled = true;
    }

    /**
     * @brief Disables the @c WARN log level.
     */
    void Config::disableWarnLogLevel() {
        warnLevelEnabled = false;
    }

    /**
     * @brief Enables the @c ERROR log level.
     */
    void Config::enableErrorLogLevel() {
        errorLevelEnabled = true;
    }

    /**
     * @brief Disables the @c ERROR log level.
     */
    void Config::disableErrorLogLevel() {
        errorLevelEnabled = false;
    }

    /**
     * @brief Enables the @c FATAL log level.
     */
    void Config::enableFatalLogLevel() {
        fatalLevelEnabled = true;
    }

    /**
     * @brief Disables the @c FATAL log level.
     */
    void Config::disableFatalLogLevel() {
        fatalLevelEnabled = false;
    }

    /**
     * @brief Checks if the @c INFO log level is enabled.
     * @return @c true if it is enabled, @c false otherwise.
     */
    bool Config::isInfoLogLevelEnabled() const {
        return infoLevelEnabled;
    }

    /**
     * @brief Checks if the @c DEBUG log level is enabled.
     * @return @c true if it is enabled, @c false otherwise.
     */
    bool Config::isDebugLogLevelEnabled() const {
        return debugLevelEnabled;
    }

    /**
     * @brief Checks if the @c WARN log level is enabled.
     * @return @c true if it is enabled, @c false otherwise.
     */
    bool Config::isWarnLogLevelEnabled() const {
        return warnLevelEnabled;
    }

    /**
     * @brief Checks if the @c ERROR log level is enabled.
     * @return @c true if it is enabled, @c false otherwise.
     */
    bool Config::isErrorLogLevelEnabled() const {
        return errorLevelEnabled;
    }

    /**
     * @brief Checks if the @c FATAL log level is enabled.
     * @return @c true if it is enabled, @c false otherwise.
     */
    bool Config::isFatalLogLevelEnabled() const {
        return fatalLevelEnabled;
    }
}