cmake_minimum_required(VERSION 3.28)
project(week-one-lab VERSION 1.0.0)
add_executable(hello_world)
target_sources(hello_world PRIVATE src/hello.cpp src/name.cpp)
target_include_directories(hello_world PRIVATE include)

