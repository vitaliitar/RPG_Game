
#pragma once

#ifndef HELLFIRE_COMMAND_HPP
#define HELLFIRE_COMMAND_HPP

#include "skill_command.hpp"
#include "../combat.hpp"

// Concrete command 1
class Hellfire: public SkillCommand {
public:
    Hellfire(Combat *combat);
    void execute() override;

private:
    Combat *m_combat;
};

#endif // HELLFIRE_COMMAND_HPP