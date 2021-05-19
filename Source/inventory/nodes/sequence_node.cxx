#include "sequence_node.hpp"

bool Sequence::run() {
    for (Node* child : get_children()) {
        if (!child->run())
            return false;
    }
    return true;
}