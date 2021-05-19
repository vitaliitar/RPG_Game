#pragma once

#ifndef ROOT_NODE_HPP
#define ROOT_NODE_HPP

#include <vector>
#include <algorithm>
#include "node.hpp"
#include "composite_node.hpp"

class Root : public Node {
private:
    Node* child;
    friend class ItemManager;
    void set_child (Node* new_child);
    virtual bool run() override;
};

#endif // ROOT_NODE_HPP