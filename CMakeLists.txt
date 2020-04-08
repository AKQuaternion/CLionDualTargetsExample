cmake_minimum_required(VERSION 3.15)
project(CLionDualTargetsExample)
set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp Foo.cpp Foo.hpp)

add_executable(tests Foo tests.cpp catch.hpp)

target_compile_options(tests PRIVATE
        -Wall -Wextra -Wpedantic -Weverything
        -Wno-c++98-compat -Wno-padded -Wno-weak-vtables -Wno-missing-prototypes)

