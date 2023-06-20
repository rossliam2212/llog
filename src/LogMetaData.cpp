//
// Created by Liam Ross on 17/06/2023.
//

#include "../include/llog/LogMetaData.hpp"

namespace llog {
    LogMetaData::LogMetaData()
        : lineNumber{0},
          functionName{""},
          fileName{""} {
    }

    LogMetaData::LogMetaData(std::size_t lineNumber, const char* functionName, const char* fileName)
        : lineNumber{lineNumber},
          functionName{functionName},
          fileName{fileName} {
    }

    std::size_t LogMetaData::getLineNumber() const {
        return lineNumber;
    }

    const char* LogMetaData::getFunctionName() const {
        return functionName;
    }

    const char* LogMetaData::getFileName() const {
        return fileName;
    }
}