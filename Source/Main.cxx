#include <iostream>

#include "Game.hpp"

// Entry point
int main()
{

    // load entity

    Game* g = Game::Shared();

    g->Initialize();

	return 0;
}