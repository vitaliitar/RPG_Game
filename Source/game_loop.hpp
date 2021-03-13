#ifndef _GAME_LOOP_HPP
#define _GAME_LOOP_HPP

#include "game.hpp"

class Game;

class GameLoop {
public:
    GameLoop(std::size_t frame_duration);

    virtual ~GameLoop() = default;

    virtual bool execute(Game* game) const;

protected:
    std::size_t  m_frame_duration;
};

#endif // _GAME_LOOP_HPP
