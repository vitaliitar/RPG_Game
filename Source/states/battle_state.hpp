
#pragma once

#ifndef BATTLE_STATE_HPP
#define BATTLE_STATE_HPP

#include "../game/game_state.hpp"

class BattleState: public GameState {
public:
    void update();

    void render();

    void handle_input() override;

};

#endif // BATTLE_STATE_HPP