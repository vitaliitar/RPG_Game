#include <iostream>

#include "game.hpp"
#include "game_loop.hpp"
#include "main_state.hpp"
#include "battle_state.hpp"
#include "entity.hpp"

// Entry point
int main() {

    GameLoop game_loop{10};

    Game* game = new Game();

//    game->push_state(std::make_unique<MainState>());

    game->push_state(std::make_unique<BattleState>());

    const auto battle_state = game->peek_state();

    Entity* armando = new Entity("2a", "Armando", 50, 100, 20, 30);

    Entity* callan = new Entity("2b", "Callan", 70, 100, 50, 30);

    armando->attack(callan);

    std::cout << callan->m_hp;


    game->render(game_loop);

	return 0;
}