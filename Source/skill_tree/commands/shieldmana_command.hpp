
#pragma once

#ifndef SHIELDMANA_COMMAND_HPP
#define SHIELDMANA_COMMAND_HPP

#include "skill_command.hpp"
#include "../combat.hpp"

// Concrete command 2
class ShieldMana: public SkillCommand {
public:
    ShieldMana(Combat *combat);
    void execute() override;

private:
    Combat *m_combat;
};

#endif // SHIELDMANA_COMMAND_HPP