#include "Engine.h"
#include <iostream>
#include <thread>
#include <chrono>

Engine::Engine() : isRunning(false) {}

Engine::~Engine() {}

void Engine::initialize() {
    std::cout << "Engine initialized." << std::endl;
    isRunning = true;
}

void Engine::run() {
    int counter = 0;
    while (isRunning) {
        // Main game loop
        if (counter < 10) {
            std::cout << "Engine running..." << std::endl;
            counter++;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
        // Placeholder for game update and render logic
    }
}

void Engine::shutdown() {
    std::cout << "Engine shutting down." << std::endl;
    isRunning = false;
}
