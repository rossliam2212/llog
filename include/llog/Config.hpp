//
// Created by Liam Ross on 15/06/2023.
//

#ifndef LLOG_CONFIG_HPP
#define LLOG_CONFIG_HPP

namespace llog {
    /**
     * @brief @c Config class.
     *
     * Holds information on how log messages are displayed.
     */
    class Config {
    public:
        void enableConsoleColors();
        void disableConsoleColors();
        void useUppercaseLogLevels();
        void useLowercaseLogLevels();
        void useFullLogLevel();
        void useLogLevelId();
        void displayFullLogInColor();
        void displayOnlyLogLevelInColor();
        void setTimeStampPattern(const char* pattern);

        bool getConsoleColorsEnabled() const;
        bool getUppercaseLogLevels() const;
        bool getLogLevelAsId() const;
        bool getFullLogMessageInColor() const;
        const char* getTimeStampPattern() const;

        void enableInfoLogLevel();
        void disableInfoLogLevel();
        void enableDebugLogLevel();
        void disableDebugLogLevel();
        void enableWarnLogLevel();
        void disableWarnLogLevel();
        void enableErrorLogLevel();
        void disableErrorLogLevel();
        void enableFatalLogLevel();
        void disableFatalLogLevel();

        bool isInfoLogLevelEnabled() const;
        bool isDebugLogLevelEnabled() const;
        bool isWarnLogLevelEnabled() const;
        bool isErrorLogLevelEnabled() const;
        bool isFatalLogLevelEnabled() const;

    private:
        bool consoleColorsEnabled{true};
        bool uppercaseLogLevels{true};
        bool logLevelAsId{false};
        bool fullLogMessageInColor{false};
        bool infoLevelEnabled{true};
        bool debugLevelEnabled{true};
        bool warnLevelEnabled{true};
        bool errorLevelEnabled{true};
        bool fatalLevelEnabled{true};
        const char* timeStampPattern{"%d/%m/%y %T"};
    };
}

#endif //LLOG_CONFIG_HPP
