cmake_minimum_required(VERSION 3.14)
project(ctp_rpc_generator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Generated parser/lexer
file(GLOB antlr_gen_files
        "generated/antlr/*.h"
        "generated/antlr/*.cpp"
)

# Executable
add_executable(ctp_rpc_generator
        main.cpp
        src/HeaderFileParserImpl.cpp
        ${antlr_gen_files}
)

# Link with system-installed antlr4 runtime
target_link_libraries(ctp_rpc_generator PRIVATE antlr4-runtime)

# Include dirs
target_include_directories(ctp_rpc_generator PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/generated/antlr
        /usr/include/antlr4-runtime   # <-- from libantlr4-runtime-dev
)
