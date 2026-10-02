cmake_minimum_required(VERSION 3.10)

project(hello)

add_subdirectory(vendor/spdlog)

set(CMAKE_CXX_STANDARD 23)

find_package(raylib CONFIG REQUIRED)

add_library(greeting 
    hello.cpp hello.hpp
)

add_executable(hello
    main.cpp
)

if (MSVC)
    add_compile_options(greeting "/W4")
else ()
    add_compile_options(greeting "-Wall -Wextra")
endif()

target_link_libraries(hello spdlog raylib greeting)

