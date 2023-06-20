//
// Created by Liam Ross on 15/06/2023.
//

#ifndef LLOG_LOGGERMANAGER_HPP
#define LLOG_LOGGERMANAGER_HPP

#include <memory>

#include "Logger.hpp"

namespace llog {
    /**
     * @brief @c LoggerManager class.
     *
     * Singleton class that holds a shared pointer to the @c Logger object.
     */
    class LoggerManager {
    public:
        static LoggerManager& getInstance();
        Logger* getLogger();

        LoggerManager(const LoggerManager&) = delete;
        LoggerManager& operator=(const LoggerManager&) = delete;

    private:
        LoggerManager();
        ~LoggerManager() = default;

        std::shared_ptr<Logger> logger;
    };
}


#endif //LLOG_LOGGERMANAGER_HPP
