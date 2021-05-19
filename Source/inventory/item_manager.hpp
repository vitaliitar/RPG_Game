
#pragma once

#ifndef ITEM_MANAGER_HPP
#define ITEM_MANAGER_HPP

#include "item.hpp"
#include "nodes/root.hpp"

class ItemManager {
public:

private:
    Root* root;
public:
    ItemManager();
    void setRootChild (Node* rootChild) const;
    bool run() const;
};


#endif // ITEM_MANAGER_HPP