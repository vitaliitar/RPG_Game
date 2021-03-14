
#pragma once

#ifndef _GAME_LOOP_HPP
#define _GAME_LOOP_HPP

#include "game.hpp"

class Game;

class GameLoop {
public:
    GameLoop(int frame_duration);

    virtual ~GameLoop() = default;

    virtual bool execute(Game* game) const;

protected:
    int  m_frame_duration;
};

#endif // _GAME_LOOP_HPP
