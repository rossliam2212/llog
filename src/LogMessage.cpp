//
// Created by Liam Ross on 16/06/2023.
//

#include "../include/llog/LogMessage.hpp"

namespace llog {
    LogMessage::LogMessage(const std::string& timeStamp, levels::LogLevel logLevel, const std::string& message)
        : timeStamp{timeStamp},
          logLevel{logLevel},
          message{message} {
    }

    LogMessage::LogMessage(const std::string& timeStamp, levels::LogLevel logLevel, const std::string& message, const LogMetaData& metaData, const std::vector<std::string>& args)
        : timeStamp{timeStamp},
          logLevel{logLevel},
          message{message},
          metaData{metaData},
          args{args} {
    }

    std::string LogMessage::getTimeStamp() const {
        return timeStamp;
    }

    levels::LogLevel LogMessage::getLogLevel() const {
        return logLevel;
    }

    std::string LogMessage::getMessage() const {
        return message;
    }

    LogMetaData LogMessage::getMetaData() const {
        return metaData;
    }

    std::vector<std::string> LogMessage::getArgs() const {
        return args;
    }
}