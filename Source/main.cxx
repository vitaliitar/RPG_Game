#include <iostream>

#include "game.hpp"

// Entry point
int main()
{
    Game* game = Game::shared();

    game->initialize();

    game->run_loop();

    game->shutdown();

	return 0;
}