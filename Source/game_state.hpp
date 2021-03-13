#ifndef _GAME_STATE_HPP
#define _GAME_STATE_HPP

#include "game.hpp"
#include "game_state.hpp"

class Game;

class GameState {
public:
    virtual void handle_input() = 0;

    void set_game(Game* game);

protected:
    Game* m_game;

};

#endif // _GAME_STATE_HPP
