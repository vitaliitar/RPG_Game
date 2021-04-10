#include <iostream>
#include "skill_tree.hpp"

void SkillTree::add_skill(Skill skill) {
    this->insert(skill, this->root);
}

void SkillTree::insert(Skill skill, SkillNode*& node) {
    if (node == nullptr) {
        node = new SkillNode(skill);
    } else {
        if (skill.id < node->skill.id) {
            this->insert(skill, node->left);
        } else if (skill.id > node->skill.id){
            this->insert(skill, node->right);
        } else {
            std::cout << "You already have this skill \n";
        }
    }
}

bool SkillTree::is_skill_available(Skill skill) {
    return contains(skill, this->root);
}

bool SkillTree::contains(Skill skill, SkillNode *&node) {
    if (node == nullptr) {
        return node->skill.is_available;
    } else if (skill.id == node->skill.id) {
        return true;
    } else if (skill.id < node->skill.id) {
        return this->contains(skill, node->left);
    } else {
        return this->contains(skill, node->right);
    }
}

void SkillTree::print_skills() {
    if (this->root == nullptr) {
        std::cout << "{ } \n";
    } else {
        std::cout << this->print_subtree(this->root) << std::endl;
    }
}

std::string SkillTree::print_subtree(SkillNode *node) {
    std::string leftStr = (node->left == nullptr) ? "{}" : print_subtree(node->left);
    std::string rightStr = (node->right == nullptr) ? "{}" : print_subtree(node->right);
    std::string result = "{" + std::to_string(node->skill.name) + ", " + leftStr + ", " + rightStr + "}";

    return result;
}