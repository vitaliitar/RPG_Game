#include "hellfire_command.hpp"

Hellfire::Hellfire(Combat *combat) {this->m_combat = combat;}

void Hellfire::execute() {
    m_combat->attack();
}