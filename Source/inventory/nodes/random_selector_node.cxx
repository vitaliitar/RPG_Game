#include "random_selector_node.hpp"

bool RandomSelector::run() {
    for (Node* child : children_shuffled()) {
        if (child->run())
            return true;
    }
    return false;
}