
#pragma once

#ifndef MAIN_STATE_HPP
#define MAIN_STATE_HPP

#include "game_state.hpp"

class MainState: public GameState {
public:
    void update();

    void render();

    void handle_input() override;

};

#endif // MAIN_STATE_HPP