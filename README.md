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
20/06/23 16:27:08 [info]  [main.cpp@18] Info log message
20/06/23 16:27:08 [debug] [main.cpp@19] Debug log message
20/06/23 16:27:08 [warn]  [main.cpp@20] Warning log message
20/06/23 16:27:08 [error] [main.cpp@21] Error log message
20/06/23 16:27:08 [fatal] [main.cpp@22] Fatal log message


20/06/23 16:27:08 [info]  [main.cpp@26] Info log message
20/06/23 16:27:08 [debug] [main.cpp@27] Debug log message
20/06/23 16:27:08 [warn]  [main.cpp@28] Warning log message
20/06/23 16:27:08 [error] [main.cpp@29] Error log message
20/06/23 16:27:08 [fatal] [main.cpp@30] Fatal log log


20/06/23 16:27:08 [info]  Basic INFO message
20/06/23 16:27:08 [debug] Basic DEBUG message
20/06/23 16:27:08 [warn]  Basic WARN message
20/06/23 16:27:08 [error] Basic ERROR message
20/06/23 16:27:08 [fatal] Basic FATAL message
```

<img src="images/output1.png">