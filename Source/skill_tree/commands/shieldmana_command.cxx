#include "shieldmana_command.hpp"


ShieldMana::ShieldMana(Combat *combat) { this->m_combat = combat; }
void ShieldMana::execute() { m_combat->defense(); }