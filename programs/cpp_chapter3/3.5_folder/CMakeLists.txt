cmake_minimum_required(VERSION 3.20)

project(testc3)

set(CMAKE_CXX_STANDARD 20)

find_package(spdlog REQUIRED)
find_package(fmt REQUIRED)

add_executable(testc3 testc3.cpp)

target_link_libraries(testc3 PRIVATE spdlog::spdlog fmt::fmt)
