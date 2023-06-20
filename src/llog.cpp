//
// Created by Liam Ross on 15/06/2023.
//

#include "../include/llog/llog.hpp"

namespace llog {
    /**
     * @brief Sets the logger's config.
     * @param config
     *          The config to apply to the logger.
     */
    void setLoggerConfig(const Config& config) {
        LoggerManager::getInstance().getLogger()->setConfig(config);
    }

    /**
     * @brief Checks if the logger is enabled for the @c INFO level.
     * @return @c true if logger is enabled for the @c INFO level, @c false otherwise.
     */
    bool isInfoEnabled() {
        return LoggerManager::getInstance().getLogger()->getConfig().isInfoLogLevelEnabled();
    }

    /**
     * @brief Checks if the logger is enabled for the @c DEBUG level.
     * @return @c true if logger is enabled for the @c DEBUG level, @c false otherwise.
     */
    bool isDebugEnabled() {
        return LoggerManager::getInstance().getLogger()->getConfig().isDebugLogLevelEnabled();
    }

    /**
     * @brief Checks if the logger is enabled for the @c WARN level.
     * @return @c true if logger is enabled for the @c WARN level, @c false otherwise.
     */
    bool isWarningEnabled() {
        return LoggerManager::getInstance().getLogger()->getConfig().isWarnLogLevelEnabled();
    }

    /**
     * @brief Checks if the logger is enabled for the @c ERROR level.
     * @return @c true if logger is enabled for the @c ERROR level, @c false otherwise.
     */
    bool isErrorEnabled() {
        return LoggerManager::getInstance().getLogger()->getConfig().isErrorLogLevelEnabled();
    }

    /**
     * @brief Checks if the logger is enabled for the @c FATAL level.
     * @return @c true if logger is enabled for the @c FATAL level, @c false otherwise.
     */
    bool isFatalEnabled() {
        return LoggerManager::getInstance().getLogger()->getConfig().isFatalLogLevelEnabled();
    }

    /**
     * @brief Logs a message at the @c INFO level.
     * @param msg
     *          The message to be logged.
     */
    void info(const std::string& msg) {
        if (isInfoEnabled()) {
            LoggerManager::getInstance().getLogger()->log(levels::LogLevel::Info, msg);
        }
    }

    /**
     * @brief Logs a message at the @c DEBUG level.
     * @param msg
     *          The message to be logged.
     */
    void debug(const std::string& msg) {
        if (isDebugEnabled()) {
            LoggerManager::getInstance().getLogger()->log(levels::LogLevel::Debug, msg);
        }
    }

    /**
     * @brief Logs a message at the @c WARN level.
     * @param msg
     *          The message to be logged.
     */
    void warning(const std::string& msg) {
        if (isWarningEnabled()) {
            LoggerManager::getInstance().getLogger()->log(levels::LogLevel::Warning, msg);
        }
    }

    /**
     * @brief Logs a message at the @c ERROR level.
     * @param msg
     *          The message to be logged.
     */
    void error(const std::string& msg) {
        if (isErrorEnabled()) {
            LoggerManager::getInstance().getLogger()->log(levels::LogLevel::Error, msg);
        }
    }

    /**
     * @brief Logs a message at the @c FATAL level.
     * @param msg
     *          The message to be logged.
     */
    void fatal(const std::string& msg) {
        if (isFatalEnabled()) {
            LoggerManager::getInstance().getLogger()->log(levels::LogLevel::Fatal, msg);
        }
    }
}