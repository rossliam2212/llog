//
// Created by Liam Ross on 17/06/2023.
//

#ifndef LLOG_LOGMETADATA_HPP
#define LLOG_LOGMETADATA_HPP

#include <iostream>
#include <cstdlib>

namespace llog {
    class LogMetaData {
    public:
        LogMetaData();
        LogMetaData(std::size_t lineNumber, const char* functionName, const char* fileName);

        std::size_t getLineNumber() const;
        const char* getFunctionName() const;
        const char* getFileName() const;

    private:
        std::size_t lineNumber;
        const char* functionName;
        const char* fileName;
    };
}


#endif //LLOG_LOGMETADATA_HPP
