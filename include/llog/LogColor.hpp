//
// Created by Liam Ross on 19/06/2023.
//

#ifndef LLOG_LOGCOLOR_HPP
#define LLOG_LOGCOLOR_HPP

#include "LogLevel.hpp"

namespace llog {
    class LogColor {
    public:
        LogColor();

        std::string getColor(levels::LogLevel level);
        std::string getResetColor();
        void setColor(levels::LogLevel level, std::string_view color);

    private:
        void setDefaultColors();

    private:
        std::array<std::string, 6> colors;

        static constexpr const char* WHITE{"\x1B[97m"};
        static constexpr const char* GREEN{"\x1B[32m"};
        static constexpr const char* BLUE{"\x1B[34m"};
        static constexpr const char* RED{"\x1B[31m"};
        static constexpr const char* MAGENTA{"\x1B[35m"};
        static constexpr const char* YELLOW{"\x1B[93m"};
        static constexpr const char* CYAN{"\x1B[36m"};
        static constexpr const char* RED_BG{"\x1B[101m"};
        static constexpr const char* GREEN_BG{"\x1B[42m"};
        static constexpr const char* BLUE_BG{"\x1B[44m"};
        static constexpr const char* MAGENTA_BG{"\x1B[45m"};
        static constexpr const char* YELLOW_BG{"\x1B[43m"};
        static constexpr const char* CYAN_BG{"\x1B[46m"};
        static constexpr const char* RESET{"\x1B[0m"};
    };
}

#endif //LLOG_LOGCOLOR_HPP
