//
// Created by Liam Ross on 15/06/2023.
//

#ifndef LLOG_LOGLEVEL_HPP
#define LLOG_LOGLEVEL_HPP

#include <array>
#include <cstdint>
#include <string>
#include <string_view>
#include <type_traits>
#include <unordered_map>

namespace llog::levels {
    enum class LogLevel : uint8_t {
        Info,
        Debug,
        Warning,
        Error,
        Fatal,
        None
    };
    std::string_view logLevelToStringUpper(LogLevel level);
    std::string_view logLevelToStringLower(LogLevel level);
    std::string_view logLevelToStringIdUpper(LogLevel level);
    std::string_view logLevelToStringIdLower(LogLevel level);
}

#endif //LLOG_LOGLEVEL_HPP
