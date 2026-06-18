cmake_minimum_required(VERSION 3.10)
project(LDmicro_TUI_Keil)

set(CMAKE_CXX_STANDARD 17)

add_executable(ldmicro_tui 
    src/main.cpp
    src/core/ladder.cpp
    src/tui/ui.cpp
    src/compiler/generator.cpp
    src/plc/plcLib.cpp
)

target_include_directories(ldmicro_tui PRIVATE include src/plc src)

# For Windows console UTF-8
if(WIN32)
    target_link_libraries(ldmicro_tui PRIVATE -static)
endif()