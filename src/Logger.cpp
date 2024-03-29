//
// Created by Liam Ross on 15/06/2023.
//

#include "../include/llog/Logger.hpp"

namespace llog {
    void Logger::log(levels::LogLevel level, const std::string& msg) {
        LogMessage lm{constructLogMessage(level, msg)};
        std::string formattedLog{LogMessageFormatter::format(lm, config)};
    }

    /**
     * @brief Sets the loggers config.
     * @param cfg
     *          The config to apply to the logger.
     */
    void Logger::setConfig(const Config& cfg) {
        config = cfg;
    }

    /**
     * @brief Gets the loggers config.
     * @return The loggers config.
     */
    Config Logger::getConfig() const {
        return config;
    }

    LogMessage Logger::constructLogMessage(levels::LogLevel level, const std::string& msg) const {
        const std::string timeStamp{TimeStampClock::now(config.getTimeStampPattern())};
        return {timeStamp, level, msg};
    }

    LogMessage Logger::constructLogMessage(levels::LogLevel level, const std::string& msg, const LogMetaData& metaData, const std::vector<std::string>& args) const {
        const std::string timeStamp{TimeStampClock::now(config.getTimeStampPattern())};
        return {timeStamp, level, msg, metaData, args};
    }
}