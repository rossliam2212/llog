//
// Created by Liam Ross on 15/06/2023.
//

#ifndef LLOG_LOGGER_HPP
#define LLOG_LOGGER_HPP

#include <iostream>

#include "LogLevel.hpp"
#include "LogMessageFormatter.hpp"
#include "TimeStampClock.hpp"

namespace llog {
    class Logger {
    public:
        void log(levels::LogLevel level, const std::string& msg);

        template <typename... Args>
        void log(levels::LogLevel level, const std::string& msg, const LogMetaData& metaData, Args&&... args) {
            std::vector<std::string> arguments{unpackArguments(std::make_tuple(args...))};
            LogMessage lm{constructLogMessage(level, msg, metaData, arguments)};

            std::string formattedLog{LogMessageFormatter::format(lm, config)};
        }

        void setConfig(const Config& cfg);
        Config getConfig() const;

    private:
        LogMessage constructLogMessage(levels::LogLevel level, const std::string& msg) const;
        LogMessage constructLogMessage(levels::LogLevel level, const std::string& msg, const LogMetaData& metaData, const std::vector<std::string>& args) const;

        template <typename... Args>
        std::vector<std::string> unpackArguments(const std::tuple<Args...>& args) {
            std::vector<std::string> arguments;

            //- Lambda function to convert an argument to a string
            auto convertArgToString = [](const auto& arg) {
                std::stringstream ss;
                ss << arg;
                return ss.str();
            };
            //- Applies the lambda function above to each argument
            std::apply([&](const auto&... argsTuple) {
                ((arguments.emplace_back(convertArgToString(argsTuple))), ...);
            }, args);

            return arguments;
        }

    private:
        Config config;
    };
}

#endif //LLOG_LOGGER_HPP
