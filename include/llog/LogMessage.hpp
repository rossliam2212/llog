//
// Created by Liam Ross on 16/06/2023.
//

#ifndef LLOG_LOGMESSAGE_HPP
#define LLOG_LOGMESSAGE_HPP

#include <string>
#include <vector>

#include "LogLevel.hpp"
#include "LogMetaData.hpp"

namespace llog {
    class LogMessage {
    public:
        LogMessage(const std::string& timeStamp, levels::LogLevel logLevel, const std::string& message);
        LogMessage(const std::string& timeStamp, levels::LogLevel logLevel, const std::string& message, const LogMetaData& metaData, const std::vector<std::string>& args);

        std::string getTimeStamp() const;
        levels::LogLevel getLogLevel() const;
        std::string getMessage() const;
        LogMetaData getMetaData() const;
        std::vector<std::string> getArgs() const;

    private:
        std::string timeStamp;
        levels::LogLevel logLevel;
        std::string message;
        LogMetaData metaData;
        std::vector<std::string> args;
    };
}

#endif //LLOG_LOGMESSAGE_HPP
