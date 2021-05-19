#include <iostream>
#include <list>
#include <ctime>

#include "game/game.hpp"
#include "game/game_loop.hpp"
#include "states/main_state.hpp"
#include "states/battle_state.hpp"
#include "entity/entity.hpp"
#include "skill_tree/skill_tree.hpp"
#include "skill_tree/skill_command_manager.hpp"
#include "skill_tree/combat.hpp"
#include "skill_tree/commands/hellfire_command.hpp"
#include "dialogue/dialogue.hpp"
#include "entity/player.hpp"
#include "inventory/item_manager.hpp"
#include "inventory/nodes/selector_node.hpp"
#include "inventory/nodes/sequence_node.hpp"
#include "inventory/action.hpp"

// Entry point
int main() {

    std::srand(std::time(nullptr));
    ItemManager itemManager;
    Selector selector[3];
    Sequence sequence[4];
    Action belhavenBlade ("Belhaven Blade", 99), aerondight ("Aerondight", 15),
            bloodsword ("Bloodsword", 25), gesheft ("Gesheft", 99), viperswords ("Viperswords", 60),
            manticoreswords ("manticoreswords", 60), assassinboots ("Assassin's boots", 100), bountyhunter ("bountyhunter", 99),
            cavalrygauntlets ("Cavalry gauntlets", 70), condottiereboots ("Condottiere boots", 65),
            enhancedUrsine ("enhancedUrsine after unlocking it", 85), magDeiracuirass ("magDeiracuirass", 95),
            legendaryWolvenarmor ("legendaryWolvenarmor", 85), superiorFelineboots ("superiorFelineboots", 100);

    itemManager.setRootChild (&selector[0]);
    selector[0].add_children ({&sequence[0],&sequence[2]});
    sequence[0].add_children ({&belhavenBlade, &selector[1], &manticoreswords, &assassinboots});
    selector[1].add_children ({&aerondight, &sequence[1], &viperswords});
    sequence[1].add_children ({&bloodsword, &gesheft});
    sequence[2].add_children ({&bountyhunter, &selector[2], &legendaryWolvenarmor, &superiorFelineboots});
    const std::list<Node*> nodes = {&cavalrygauntlets, &sequence[3], &magDeiracuirass};
//    selector[2].add_children(nodes);
    sequence[3].add_children ({&condottiereboots, &enhancedUrsine});

    if (itemManager.run())
        std::cout << "Congratulations!" << std::endl;
    else
        std::cout << "Sorry." << std::endl;

    /*

    GameLoop game_loop{10};

//    Game* game = new Game();
//
//    game->push_state(std::make_unique<MainState>());
//
//    game->push_state(std::make_unique<BattleState>());
//
//    const auto battle_state = game->peek_state();
//
    Entity* armando = new Player({"2a", "Armando", 20, 50, 100, 20, 30});
//
    Entity* callan = new Player({"2b", "Callan", 30, 70, 100, 50, 30});
//
    armando->attack(callan);
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

    Dialogue dialogue("Choose what do you want", {"Play cards", "Watch movies"});

    int choice = dialogue.activate();

    dialogue.make_choice(choice);
     */


	return 0;
}