#include <iostream>
#include "skill_tree.hpp"

void SkillTree::add_skill(int value) {
    this->insert(value, this->root);
}

void SkillTree::insert(int value, SkillNode*& node) {
    if (node == nullptr) {
        node = new SkillNode(value);
    } else {
        if (value < node->data) {
            this->insert(value, node->left);
        } else if (value > node->data){
            this->insert(value, node->right);
        } else {
            std::cout << "You already have this skill \n";
        }
    }
}

bool SkillTree::is_skill_available(int value) {
    return contains(value, this->root);
}

bool SkillTree::contains(int value, SkillNode *&node) {
    if (node == nullptr) {
        return false;
    } else if (value == node->data) {
        return true;
    } else if (value < node->data) {
        return this->contains(value, node->left);
    } else {
        return this->contains(value, node->right);
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
    std::string result = "{" + std::to_string(node->data) + ", " + leftStr + ", " + rightStr + "}";

    return result;
}