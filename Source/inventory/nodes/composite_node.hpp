#pragma once

#ifndef COMPOSITE_COMPOSITE_NODE_HPP
#define COMPOSITE_COMPOSITE_NODE_HPP

#include <vector>
#include <algorithm>
#include "node.hpp"

class CompositeNode : public Node {

public:
    const std::vector<Node*>& get_children() const;

    void add_child (Node* child);
    void add_children (std::initializer_list<Node*>&& new_children);

    template <typename CONTAINER>
    void add_children (const CONTAINER& new_children);

private:
    std::vector<Node*> children;
protected:
    std::vector<Node*> children_shuffled() const;
};

#endif // COMPOSITE_COMPOSITE_NODE_HPP