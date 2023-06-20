//
// Created by Liam Ross on 17/06/2023.
//

#ifndef LLOG_LOGMESSAGEFORMATTER_HPP
#define LLOG_LOGMESSAGEFORMATTER_HPP

#include <sstream>
#include <iomanip>

#include "Config.hpp"
#include "LogColor.hpp"
#include "LogMessage.hpp"
#include "LogMetaData.hpp"

namespace llog {
    class LogMessageFormatter {
    public:
        static std::string format(const LogMessage& logMessage, const Config& config);

    private:
        static std::string getFormattedLogLevel(levels::LogLevel level, const Config& config) ;
        static std::string formatLogMessageArgs(const std::string& message, const std::vector<std::string>& args) ;

    private:
        LogColor logColor;
    };
}

#endif //LLOG_LOGMESSAGEFORMATTER_HPP
