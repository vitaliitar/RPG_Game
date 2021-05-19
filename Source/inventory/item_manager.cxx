#include "item_manager.hpp"

bool ItemManager::run() const {
    return root->run();
}

void ItemManager::setRootChild(Node *rootChild) const {
    root->set_child (rootChild);
}

ItemManager::ItemManager() : root(new Root) {}