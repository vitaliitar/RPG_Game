#include <iostream>

#include "Game.hpp"

// Entry point
int main()
{
    Game* game = Game::Shared();

    game->Initialize();

    game->RunLoop();

    game->Shutdown();

	return 0;
}