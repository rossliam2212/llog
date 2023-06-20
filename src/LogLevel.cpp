//
// Created by Liam Ross on 15/06/2023.
//

#include "../include/llog/LogLevel.hpp"

namespace llog::levels {
    /**
     * @brief Gets a log level as an uppercase string.
     * @param level
     *          The log level.
     * @return The given log level as an uppercase string.
     */
    std::string_view logLevelToStringUpper(LogLevel level) {
        static constexpr std::array<std::string_view, 6> logLevels = {
                "INFO",
                "DEBUG",
                "WARN",
                "ERROR",
                "FATAL",
                "NONE"
        };
        auto logLevel = static_cast<std::underlying_type_t<LogLevel>>(level);
        return logLevels.at(logLevel);
    }

    /**
     * @brief Gets a log level as a lowercase string.
     * @param level
     *          The log level.
     * @return The given log level as a lowercase string.
     */
    std::string_view logLevelToStringLower(LogLevel level) {
        static constexpr std::array<std::string_view, 6> logLevels = {
                "info",
                "debug",
                "warn",
                "error",
                "fatal",
                "none"
        };
        auto logLevel = static_cast<std::underlying_type_t<LogLevel>>(level);
        return logLevels.at(logLevel);
    }

    /**
     * @brief Gets the ID of a log level as an uppercase string.
     * @param level
     *          The log level.
     * @return The ID of the given log level as an uppercase string.
     */
    std::string_view logLevelToStringIdUpper(LogLevel level) {
        static constexpr std::array<std::string_view, 6> logLevels = {
                "I",
                "D",
                "W",
                "E",
                "F",
                "N"
        };
        auto logLevel = static_cast<std::underlying_type_t<LogLevel>>(level);
        return logLevels.at(logLevel);
    }

    /**
     * @brief Gets the ID of a log level as a lowercase string.
     * @param level
     *          The log level.
     * @return The ID of the given log level as a lowercase string.
     */
    std::string_view logLevelToStringIdLower(LogLevel level) {
        static constexpr std::array<std::string_view, 6> logLevels = {
                "i",
                "d",
                "w",
                "e",
                "f",
                "n"
        };
        auto logLevel = static_cast<std::underlying_type_t<LogLevel>>(level);
        return logLevels.at(logLevel);
    }
}