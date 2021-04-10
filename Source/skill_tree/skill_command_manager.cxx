#include "skill_command_manager.hpp"

SkillManager::SkillManager() {}

void SkillManager::apply(SkillCommand *command) {
    m_skill_commands.push_back(command);
    command->execute();
}
