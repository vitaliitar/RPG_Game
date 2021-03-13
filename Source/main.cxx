#include <iostream>

#include "game.hpp"
#include "game_loop.hpp"
#include "main_state.hpp"

// Entry point
int main() {

    GameLoop game_loop{10};

    Game* game = new Game();

    game->push_state(std::make_unique<MainState>());

    game->render(game_loop);

	return 0;
}