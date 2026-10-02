#include <iostream>
#include "hello.hpp"
#include <raylib.h>
#include <spdlog/spdlog.h>

int main() {
    hello("Lion");

    int a;
    int b = a;

    spdlog::info("Hi from spdlog");

    InitWindow(800, 600, "Hello");
}
