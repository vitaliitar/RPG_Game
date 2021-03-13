#include <iostream>
#include "game.hpp"

Game* Game::m_instance = nullptr;

Game* Game::shared() {
    if (m_instance == nullptr) {
        m_instance = new Game();
    }

    return m_instance;
}

bool Game::initialize() {
    std::cout << "Initialize game\n";

    return true;
}

bool Game::run_loop() {
    m_is_running = true;

    while (m_is_running) {
        std::cout << "Running game\n";

        // temp
        m_is_running = false;
    }

    return false;

}

void Game::shutdown() {
    m_is_running = false;
}