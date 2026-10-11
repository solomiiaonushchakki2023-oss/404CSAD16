cmake_minimum_required(VERSION 3.15)

project(hello_world LANGUAGES CXX)

add_executable(hello_world src/main.cpp)
target_compile_features(hello_world PRIVATE cxx_std_17)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(math_operations math_operations.cpp)
target_compile_features(math_operations PRIVATE cxx_std_17)
target_include_directories(math_operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include(GoogleTest)

add_executable(unit_tests tests/unit_tests.cpp)
target_compile_features(unit_tests PRIVATE cxx_std_17)
target_link_libraries(unit_tests PRIVATE math_operations GTest::gtest_main)

gtest_discover_tests(unit_tests)