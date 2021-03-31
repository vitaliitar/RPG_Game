
#pragma once

#ifndef SKILL_TREE_HPP
#define SKILL_TREE_HPP

struct SkillNode {
    int data;
    SkillNode *left;
    SkillNode *right;

    SkillNode(int data): data(data), left(nullptr), right(nullptr) {}

};

class SkillTree {
public:
    SkillTree(): root(nullptr) {}
    SkillTree(SkillNode *rootSkill) : root(rootSkill) {}

    void print_skills();
    void add_skill(int value);
    bool is_skill_available(int value);

private:
    void insert(int value, SkillNode *&node);
    bool contains(int value, SkillNode *&node);
    std::string print_subtree(SkillNode *node);

    SkillNode* root;

};

#endif // SKILL_TREE_HPP