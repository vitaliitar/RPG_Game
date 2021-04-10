#include <iostream>
#include "main_state.hpp"

void MainState::update() {
    // some logic maybe winner etc

    std::cerr << "Main state is updated \n";
}

void MainState::render() {
    std::cerr << "Main state render \n";

}

void MainState::handle_input() {
    // check cmd pressed

    // can get game state
//    std::cerr << m_game;
    std::cerr << "Cmd pressed \n";
}
