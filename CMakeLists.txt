cmake_minimum_required(VERSION 3.15)

project(hello_world LANGUAGES CXX)

add_executable(hello_world src/main.cpp)
target_compile_features(hello_world PRIVATE cxx_std_17)
