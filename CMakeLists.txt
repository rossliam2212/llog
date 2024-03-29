cmake_minimum_required(VERSION 3.23)
project(llog)

set(CMAKE_CXX_STANDARD 17)

set(HEADER_FILES
        include/llog/llog.hpp
        include/llog/LoggerManager.hpp
        include/llog/Logger.hpp
        include/llog/LogLevel.hpp
        include/llog/LogMessage.hpp
        include/llog/LogColor.hpp
        include/llog/LogMessageFormatter.hpp
        include/llog/LogMetaData.hpp
        include/llog/Config.hpp
        include/llog/TimeStampClock.hpp
        include/llog/StopWatch.hpp)

set(SOURCE_FILES
        src/llog.cpp
        src/LoggerManager.cpp
        src/Logger.cpp
        src/LogLevel.cpp
        src/LogMessage.cpp
        src/LogColor.cpp
        src/LogMessageFormatter.cpp
        src/LogMetaData.cpp
        src/Config.cpp
        src/TimeStampClock.cpp
        src/StopWatch.cpp)

#add_executable(llog src/main.cpp ${HEADER_FILES} ${SOURCE_FILES})

# Library
add_library(llog STATIC ${SOURCE_FILES})
target_include_directories(llog PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
install(TARGETS llog EXPORT llogTargets ARCHIVE DESTINATION lib)
install(EXPORT llogTargets FILE llogTargets.cmake NAMESPACE llog:: DESTINATION lib/cmake/llog)
install(FILES cmake/llog-config.cmake DESTINATION lib/cmake/llog)

install(FILES include/llog/Config.hpp DESTINATION include/llog)
install(FILES include/llog/llog.hpp DESTINATION include/llog)
install(FILES include/llog/LogColor.hpp DESTINATION include/llog)
install(FILES include/llog/Logger.hpp DESTINATION include/llog)
install(FILES include/llog/LoggerManager.hpp DESTINATION include/llog)
install(FILES include/llog/LogLevel.hpp DESTINATION include/llog)
install(FILES include/llog/LogMessage.hpp DESTINATION include/llog)
install(FILES include/llog/LogMessageFormatter.hpp DESTINATION include/llog)
install(FILES include/llog/LogMetaData.hpp DESTINATION include/llog)
install(FILES include/llog/StopWatch.hpp DESTINATION include/llog)
install(FILES include/llog/TimeStampClock.hpp DESTINATION include/llog)


find_package(Catch2 3 REQUIRED)
set(TEST_FILES
        test/LogLevelTest.cpp
        test/ConfigTest.cpp
        test/StopWatchTest.cpp
        test/LogMetaDataTest.cpp)
add_executable(tests ${TEST_FILES} ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
