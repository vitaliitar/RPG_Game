
#pragma once

#ifndef _GAME_HPP_
#define _GAME_HPP_

#include <memory>
#include <stack>
#include "game_state.hpp"
#include "game_loop.hpp"

class GameState;
class GameLoop;

class Game final {
public:
    Game();

    Game(const Game&) = default;

    virtual ~Game();

    void push_state(std::unique_ptr<GameState> state);

    void pop_state();

    bool render(GameLoop& game_loop);

    GameState* peek_state();

    bool is_running() const;

private:
    std::stack<std::unique_ptr<GameState>> m_states;

    bool m_is_running;

};

#endif // _GAME_HPP_