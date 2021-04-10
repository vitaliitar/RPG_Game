
#pragma once

#ifndef SKILL_COMMAND_HPP
#define SKILL_COMMAND_HPP

// Command interface
class SkillCommand {
public:
    virtual ~SkillCommand();
    virtual void execute() = 0;
};

#endif // SKILL_COMMAND_HPP