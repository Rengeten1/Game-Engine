#include "Engine.h"
#include <iostream>

Engine::Engine() : isRunning(false) {}

Engine::~Engine() {}

void Engine::initialize() {
    std::cout << "Engine initialized." << std::endl;
    isRunning = true;
}

void Engine::run() {
    while (isRunning) {
        // Main game loop
        std::cout << "Engine running..." << std::endl;
        // Placeholder for game update and render logic
    }
}

void Engine::shutdown() {
    std::cout << "Engine shutting down." << std::endl;
    isRunning = false;
}
