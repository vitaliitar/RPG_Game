#include <iostream>
#include "game.hpp"

Game::Game(): m_is_running(true) {}

Game::~Game() {
    while (!m_states.empty()) {
        pop_state();
    }
}

void Game::push_state(std::unique_ptr<GameState> state) {
    state->set_game(this);

    m_states.push(std::move(state));
}

GameState* Game::peek_state() {
    if (m_states.empty()) {
        throw std::range_error("Game::pop_state removed the last one");
    }

    return m_states.top().get();
}

void Game::pop_state() {
    m_states.pop();
}

bool Game::is_running() const {
    return m_is_running;
}

bool Game::render(GameLoop &game_loop) {
    return game_loop.execute(this);
}