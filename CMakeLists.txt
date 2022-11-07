cmake_minimum_required(VERSION 3.24.2)
project(cyberpunk)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(cyberpunk_app src/main.cpp src/dice/dice.cpp)
