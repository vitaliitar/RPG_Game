#include <iostream>
#include "battle_state.hpp"

void BattleState::update() {
    // some logic maybe winner etc

    std::cerr << "Battle state is updated \n";
}

void BattleState::render() {
    std::cerr << "Battle state render \n";

}

void BattleState::handle_input() {

    // can get game state
//    std::cerr << m_game;
    std::cerr << "Cmd pressed \n";
}
