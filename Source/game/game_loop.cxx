#include <iostream>
#include "game_loop.hpp"

GameLoop::GameLoop(int frame_duration): m_frame_duration(frame_duration) {}

bool GameLoop::execute(Game *game) const {
    while (game->is_running()) {
        std::cerr << "OK";

        game->peek_state()->handle_input();
//        game->peek_state()

        game->pop_state();
    }

    return false;
}