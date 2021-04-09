
#pragma once

#ifndef SKILL_COMMAND_MANAGER_HPP
#define SKILL_COMMAND_MANAGER_HPP

#include <iostream>
#include <vector>
#include "commands/skill_command.hpp"


// Invoker
class SkillManager {
public:
    SkillManager();
    void apply(SkillCommand *command);

private:
    std::vector<SkillCommand*> m_skill_commands;
};

#endif // SKILL_COMMAND_MANAGER_HPP