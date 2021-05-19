#include <iostream>
#include "action.hpp"

Action::Action(const std::string newName, int prob)  : name(newName), probabilityOfSuccess(prob) {}

bool Action::run() {
    if (std::rand() % 100 < probabilityOfSuccess) {
        std::cout << name << " dropped succeeded." << std::endl;
        return true;
    }
    std::cout << name << " drop has failed." << std::endl;
    return false;
}