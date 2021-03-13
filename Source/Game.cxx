#include <iostream>
#include "Game.hpp"

Game* Game::mInstance = nullptr;

Game* Game::Shared() {
    if (mInstance == nullptr) {
        mInstance = new Game();
    }

    return mInstance;
}

bool Game::Initialize() {
    std::cout << "Initialize game\n";

    return true;
}

void Game::RunLoop() {
    mIsRunning = true;

    while (mIsRunning) {
        std::cout << "Running game\n";

        // temp
        mIsRunning = false;
    }

}

void Game::Shutdown() {
    mIsRunning = false;
}