# llog - Simple C++ logging library

### Basic Usage
```c++
#include <llog/llog.hpp>

int main() {
    // Basic logs
    llog::info("Basic INFO message");
    llog::debug("Basic DEBUG message");
    llog::warning("Basic WARN message");
    llog::error("Basic ERROR message");
    llog::fatal("Basic FATAL message");
    
    // Macro logs
    LLOG_INFO("Info log message");
    LLOG_DEBUG("Debug log message");
    LLOG_WARN("Warning log message");
    LLOG_ERROR("Error log message");
    LLOG_Fatal("Fatal log message");
    
    // Macro logs w/ positional args
    LLOG_INFO("{} {} {}", "Info", "log", "message");
    LLOG_DEBUG("{0} {1} {2}", "Debug", "log", "message");
    LLOG_WARN("{} {1} {2}", "Warning", "log", "message");
    LLOG_ERROR("{} {} {2}", "Error", "log", "message");
    LLOG_Fatal("{} {1} {}", "Fatal", "log", "message");
    return 0;
}
```
### Output
```
21/06/23 10:05:20 [INFO]  Basic INFO message
21/06/23 10:05:20 [DEBUG] Basic DEBUG message
21/06/23 10:05:20 [WARN]  Basic WARN message
21/06/23 10:05:20 [ERROR] Basic ERROR message
21/06/23 10:05:20 [FATAL] Basic FATAL message


21/06/23 10:05:20 [INFO]  [main.cpp@30] Info log message
21/06/23 10:05:20 [DEBUG] [main.cpp@31] Debug log message
21/06/23 10:05:20 [WARN]  [main.cpp@32] Warning log message
21/06/23 10:05:20 [ERROR] [main.cpp@33] Error log message
21/06/23 10:05:20 [FATAL] [main.cpp@34] Fatal log message


21/06/23 10:05:20 [INFO]  [main.cpp@39] Info log message
21/06/23 10:05:20 [DEBUG] [main.cpp@40] Debug log message
21/06/23 10:05:20 [WARN]  [main.cpp@41] Warning log message
21/06/23 10:05:20 [ERROR] [main.cpp@42] Error log message
21/06/23 10:05:20 [FATAL] [main.cpp@43] Fatal log log
```

<img src="images/output1.png">