#include "selector_node.hpp"

bool Selector::run() {
    for (Node* child : get_children()) {
        if (child->run())
            return true;
    }
    return false;
}