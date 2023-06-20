//
// Created by Liam Ross on 17/06/2023.
//

#include "../include/llog/LogMessageFormatter.hpp"

namespace llog {
    std::string LogMessageFormatter::format(const LogMessage& logMessage, const Config& config) {
        // Macro Logs
        // 17/06/23 22:43:33 [INFO]  [main@20] This is an info message
        // 17/06/23 22:43:33 [DEBUG] [main@20] This is an info message
        // 17/06/23 22:43:33 [WARN]  [main@20] This is an info message
        // 17/06/23 22:43:33 [ERROR] [main@20] This is an info message
        // 17/06/23 22:43:33 [FATAL] [main@20] This is an info message

        // Basic Logs
        // 17/06/23 22:43:33 [INFO]  This is an info message
        // 17/06/23 22:43:33 [DEBUG] This is an info message
        // 17/06/23 22:43:33 [WARN]  This is an info message
        // 17/06/23 22:43:33 [ERROR] This is an info message
        // 17/06/23 22:43:33 [FATAL] This is an info message

        // [timeStamp] [logLevel] [fileName@lineNumber] [logMessage]
        LogMessageFormatter lmf;
        std::ostringstream oss;

        // Timestamp
        oss << logMessage.getTimeStamp() << " ";

        // Log level
        std::string logLevel{getFormattedLogLevel(logMessage.getLogLevel(), config)};
        if (!config.getFullLogMessageInColor()) {
            oss << "[" << lmf.logColor.getColor(logMessage.getLogLevel()) << logLevel << lmf.logColor.getResetColor() << "]";
        } else {
            oss << "[" << logLevel << "]";
        }

        if (logLevel.length() == 4) {
            oss << std::left << std::setw(2) << "";
        } else {
            oss << std::left << std::setw(1) << "";
        }

        // File name & Line number
        std::string fileName{logMessage.getMetaData().getFileName()};
        if (fileName.compare("") != 0) {
            oss << "[" << logMessage.getMetaData().getFileName() << "@" << logMessage.getMetaData().getLineNumber() << "] ";
        }

        // Log message
        std::string formattedMessage{formatLogMessageArgs(logMessage.getMessage(), logMessage.getArgs())};
        oss << formattedMessage;

        if (config.getFullLogMessageInColor()) {
            std::cout << lmf.logColor.getColor(logMessage.getLogLevel()) << oss.str() << lmf.logColor.getResetColor() << "\n";
        } else {
            std::cout << oss.str() << "\n";
        }
        return oss.str();
    }

    std::string LogMessageFormatter::getFormattedLogLevel(levels::LogLevel level, const Config& config) {
        std::string logLevel;

        if (config.getLogLevelAsId()) {
            if (config.getUppercaseLogLevels()) {
                logLevel = levels::logLevelToStringIdUpper(level);
            } else {
                logLevel = levels::logLevelToStringIdLower(level);
            }
        } else {
            if (config.getUppercaseLogLevels()) {
                logLevel = levels::logLevelToStringUpper(level);
            } else {
                logLevel = levels::logLevelToStringLower(level);
            }
        }
        return logLevel;
    }

    std::string LogMessageFormatter::formatLogMessageArgs(const std::string& message, const std::vector<std::string>& args) {
        if (args.empty()) {
            return message;
        }

        int index{0};
        std::ostringstream oss;
        int pos{0};

        while (pos < message.length()) {
            if (message[pos] == '{') {
                if (message[pos+1] == '}') {
                    oss << args.at(index);
                    index++;
                    pos+=2;
                } else if (message[pos+2] == '}') {
                    int arg{message[pos+1] - '0'};
                    oss << args.at(arg);
                    pos+=3;
                } else {
                    pos++;
                }
            } else {
                oss << message[pos];
                pos++;
            }
        }
        return oss.str();
    }
}