//
// Created by Liam Ross on 19/06/2023.
//

#include "../include/llog/LogColor.hpp"

namespace llog {
    LogColor::LogColor() {
        setDefaultColors();
    }

    /**
     * @brief Gets the color for a specific log level.
     * @param level
     *          The log level to get the color of.
     * @return The given log levels color.
     */
    std::string LogColor::getColor(levels::LogLevel level) {
        auto logLevel = static_cast<std::underlying_type_t<levels::LogLevel>>(level);
        return colors.at(logLevel);
    }

    /**
     * @brief Gets the reset color.
     * @return The reset color.
     */
    std::string LogColor::getResetColor() {
        return RESET;
    }

    /**
     * @brief Sets the color of a specific log level.
     * @param level
     *          The level to change the color of.
     * @param color
     *          The color to change the log level to.
     */
    void LogColor::setColor(levels::LogLevel level, std::string_view color) {
        auto logLevel = static_cast<std::underlying_type_t<levels::LogLevel>>(level);
        colors[logLevel] = color;
    }

    /**
     * @brief Sets the default log level colors.
     */
    void LogColor::setDefaultColors() {
        setColor(levels::LogLevel::Info, WHITE);
        setColor(levels::LogLevel::Debug, BLUE);
        setColor(levels::LogLevel::Warning, YELLOW);
        setColor(levels::LogLevel::Error, RED);
        setColor(levels::LogLevel::Fatal, RED_BG);
        setColor(levels::LogLevel::None, WHITE);
    }
}