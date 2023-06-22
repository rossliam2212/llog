//
// Created by Liam Ross on 15/06/2023.
//

#ifndef LLOG_LLOG_HPP
#define LLOG_LLOG_HPP

#include "LogMetaData.hpp"
#include "LoggerManager.hpp"
#include "StopWatch.hpp"

#define LLOG_LINE __LINE__
#define LLOG_FUNC __FUNCTION__
#define LLOG_FILE __FILE_NAME__

#define LLOG_LOG(level, msg, metaData, ...)                                                             \
    llog::LoggerManager::getInstance().getLogger()->log(level, msg, metaData, ##__VA_ARGS__);            \

#define LLOG_INFO(msg, ...)                                                                                 \
    if (llog::isInfoEnabled()) {                                                                            \
        LLOG_LOG(llog::levels::LogLevel::Info, msg, {LLOG_LINE, LLOG_FUNC, LLOG_FILE}, ##__VA_ARGS__)       \
    }                                                                                                       \

#define LLOG_DEBUG(msg, ...)                                                                                \
    if (llog::isDebugEnabled()) {                                                                           \
        LLOG_LOG(llog::levels::LogLevel::Debug, msg, {LLOG_LINE, LLOG_FUNC, LLOG_FILE}, ##__VA_ARGS__)      \
    }                                                                                                       \

#define LLOG_WARN(msg, ...)                                                                                 \
    if (llog::isWarningEnabled()) {                                                                         \
        LLOG_LOG(llog::levels::LogLevel::Warning, msg, {LLOG_LINE, LLOG_FUNC, LLOG_FILE}, ##__VA_ARGS__)    \
    }                                                                                                       \

#define LLOG_ERROR(msg, ...)                                                                                \
    if (llog::isErrorEnabled()) {                                                                           \
        LLOG_LOG(llog::levels::LogLevel::Error, msg, {LLOG_LINE, LLOG_FUNC, LLOG_FILE}, ##__VA_ARGS__)      \
    }                                                                                                       \

#define LLOG_Fatal(msg, ...)                                                                                \
    if (llog::isFatalEnabled()) {                                                                           \
        LLOG_LOG(llog::levels::LogLevel::Fatal, msg, {LLOG_LINE, LLOG_FUNC, LLOG_FILE}, ##__VA_ARGS__)      \
    }                                                                                                       \

namespace llog {
    void setLoggerConfig(const Config& config);

    bool isInfoEnabled();
    bool isDebugEnabled();
    bool isWarningEnabled();
    bool isErrorEnabled();
    bool isFatalEnabled();

    void info(const std::string& msg);
    void debug(const std::string& msg);
    void warning(const std::string& msg);
    void error(const std::string& msg);
    void fatal(const std::string& msg);
}

#endif //LLOG_LLOG_HPP
