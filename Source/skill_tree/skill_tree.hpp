
#pragma once

#ifndef SKILL_TREE_HPP
#define SKILL_TREE_HPP

enum SkillTypes {
    HELLFIRE, SHIELDMANA, SLASH, VENOMOUSARROW, SHARPENBLADES
};

struct Skill {
    int id;
    SkillTypes name;
    bool is_available;
    int min_level_required;
    int needed_points;
};

struct SkillNode {
    Skill skill;

    SkillNode *left;
    SkillNode *right;

    SkillNode(Skill skill): skill(skill), left(nullptr), right(nullptr) {}

};

class SkillTree {
public:
    SkillTree(): root(nullptr) {}
    SkillTree(SkillNode *rootSkill) : root(rootSkill) {}

    void print_skills();
    void add_skill(Skill skill);
    bool is_skill_available(Skill skill);

private:
    void insert(Skill skill, SkillNode *&node);
    bool contains(Skill skill, SkillNode *&node);
    std::string print_subtree(SkillNode *node);

    SkillNode* root;

};

#endif // SKILL_TREE_HPP