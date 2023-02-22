//
// Copyright(c) 2015 Gabi Melman.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)
//
//
// spdlog usage example
//
//
#include "spdlog/spdlog.h"
#include <string>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include "spdlog/sinks/base_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

int main() {

    auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    auto logger = std::make_shared<spdlog::logger>("console", console_sink);

    logger->trace("Hello, world! from TRACE {}",spdlog::level::trace);
    logger->debug("Hello, world! from DEBUG {}",spdlog::level::debug);
    logger->info("Hello, world! from INFO {}",spdlog::level::info);
    logger->warn("Hello, world! from WARNING {}",spdlog::level::warn);
    logger->hardwarefailure("Hello, world! from HARDWARE FAILURE {}",spdlog::level::hardwarefailure);
    logger->error("Hello, world! from ERROR {}",spdlog::level::err);
    logger->critical("Hello, world! from CRITICAL {}",spdlog::level::critical);
    logger->fatal("Hello, world! from FATAL {}",spdlog::level::fatal);
    logger->alert("Hello, world! from ALERT {}",spdlog::level::alert);
    logger->emergency("Hello, world! from EMERGENCY {}",spdlog::level::emergency);

    return 0;
    
}