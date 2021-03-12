#include <iostream>
#include "Game.hpp"

Game* Game::Shared() {
    if (mInstance == nullptr) {
        mInstance = new Game();
    }

    return mInstance;
}

Game::Game() {}

bool Game::Initialize() {
    std::cout << "Initialize game\n";

    return true;
}

void Game::RunLoop() {
    return;
}

void Game::Shutdown() {
    return;
}