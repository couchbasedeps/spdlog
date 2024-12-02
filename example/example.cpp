#include "spdlog/spdlog.h"

#include "spdlog/sinks/rotating_file_sink.h"
void rotating_example() {
    // Create a file rotating logger with 5mb size max and 3 rotated files.
    auto rotating_logger = spdlog::rotating_logger_mt("some_logger_name", "logs/yy.txt", 100, 3);
    for (int i = 0; i < 10000; ++i) {
        rotating_logger->info("{} * {} = {}", i, i, i * i);
    }
}

int main () {
    rotating_example();
}
