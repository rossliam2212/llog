//
// Created by Liam Ross on 15/06/2023.
//

#include "../include/llog/LoggerManager.hpp"

namespace llog {
    LoggerManager::LoggerManager() {
        logger = std::make_shared<Logger>();
    }

    LoggerManager& LoggerManager::getInstance() {
        static LoggerManager loggerManager;
        return loggerManager;
    }

    Logger* LoggerManager::getLogger() {
        return logger.get();
    }
}