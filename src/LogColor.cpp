//
// Created by Liam Ross on 19/06/2023.
//

#include "../include/llog/LogColor.hpp"

namespace llog {
    LogColor::LogColor() {
        setDefaultColors();
    }

    std::string LogColor::getColor(levels::LogLevel level) {
        auto logLevel = static_cast<std::underlying_type_t<levels::LogLevel>>(level);
        return colors.at(logLevel);
    }

    std::string LogColor::getResetColor() {
        return RESET;
    }

    void LogColor::setColor(levels::LogLevel level, std::string_view color) {
        auto logLevel = static_cast<std::underlying_type_t<levels::LogLevel>>(level);
        colors[logLevel] = color;
    }

    void LogColor::setDefaultColors() {
        setColor(levels::LogLevel::Info, WHITE);
        setColor(levels::LogLevel::Debug, BLUE);
        setColor(levels::LogLevel::Warning, YELLOW);
        setColor(levels::LogLevel::Error, RED);
        setColor(levels::LogLevel::Fatal, RED_BG);
        setColor(levels::LogLevel::None, WHITE);
    }
}