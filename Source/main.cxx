#include <iostream>

#include "game/game.hpp"
#include "game/game_loop.hpp"
#include "states/main_state.hpp"
#include "states/battle_state.hpp"
#include "entity.hpp"
#include "skill_tree/skill_tree.hpp"
#include "skill_tree/skill_command_manager.hpp"
#include "skill_tree/combat.hpp"
#include "skill_tree/commands/hellfire_command.hpp"

// Entry point
int main() {

    GameLoop game_loop{10};

//    Game* game = new Game();
//
//    game->push_state(std::make_unique<MainState>());
//
//    game->push_state(std::make_unique<BattleState>());
//
//    const auto battle_state = game->peek_state();
//
//    Entity* armando = new Entity({"2a", "Armando", 20, 50, 100, 20, 30});
//
//    Entity* callan = new Entity({"2b", "Callan", 30, 70, 100, 50, 30});
//
//    armando->attack(callan);
//
//    game->render(game_loop);

    SkillTree skills;

    skills.add_skill({1, SkillTypes::HELLFIRE, true, 2, 20});

    skills.add_skill({2, SkillTypes::SHARPENBLADES, true, 2, 20});
    skills.add_skill({3, SkillTypes::SHIELDMANA, true, 2, 20});


    skills.print_skills();

    Combat combat;
    Hellfire hellfire(&combat);

    SkillManager skill_manager;

    skill_manager.apply(&hellfire);

	return 0;
}