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

    logger->trace("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::trace,"ARM","TEST","WIFI","HIGH");
    logger->debug("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::debug,"ARM","TEST","WIFI","HIGH");
    logger->info("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::info,"ARM","TEST","WIFI","HIGH");
    logger->warn("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::warn,"ARM","TEST","WIFI","HIGH");
    logger->hardwarefailure("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::hardwarefailure,"ARM","TEST","WIFI","HIGH");
    logger->error("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::err,"ARM","TEST","WIFI","HIGH");
    logger->critical("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::critical,"ARM","TEST","WIFI","HIGH");
    logger->fatal("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::fatal,"ARM","TEST","WIFI","HIGH");
    logger->alert("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::alert,"ARM","TEST","WIFI","HIGH");
    logger->emergency("ECU-UUID: {} APP-UUID: {} SW-ID: LOG-LEVEL: {} ECU-TYPE: {} APP-TYPE: {} FEATURE: {} SECURITY: {}",2056,23456,1208,spdlog::level::emergency,"ARM","TEST","WIFI","HIGH");

    return 0;
    
}
