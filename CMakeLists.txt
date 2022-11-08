cmake_minimum_required(VERSION 3.24.2)
project(cyberpunk)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file (GLOB_RECURSE cyberpunk_SOURCES CONFIGURE_DEPENDS "src/*.cpp")
file (GLOB_RECURSE cyberpunk_HEADERS CONFIGURE_DEPENDS "src/*.h")

set (cyberpunk_INCLUDE_DIRS "")
foreach (_headerFile ${cyberpunk_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND cyberpunk_INCLUDE_DIRS ${_dir})
endforeach()
list (REMOVE_DUPLICATES cyberpunk_INCLUDE_DIRS)

add_executable(cyberpunk_app ${cyberpunk_SOURCES})
target_include_directories(cyberpunk_app PRIVATE ${cyberpunk_INCLUDE_DIRS})