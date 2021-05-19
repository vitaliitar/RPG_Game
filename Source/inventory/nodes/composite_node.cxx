#include <iostream>
#include "composite_node.hpp"

void CompositeNode::add_child(Node *child) {
    children.emplace_back(child);
}

void CompositeNode::add_children (std::initializer_list<Node*>&& newChildren) {
    for (Node* child : newChildren) add_child(child);
}

template <typename CONTAINER>
void CompositeNode::add_children(const CONTAINER &new_children) {
    for (Node* child : new_children)
        add_child(child);
}

std::vector<Node *> CompositeNode::children_shuffled() const {
    std::vector<Node*> temp = children;
    std::random_shuffle (temp.begin(), temp.end());
    return temp;
}

const std::vector<Node *> & CompositeNode::get_children() const {
    return children;
}
