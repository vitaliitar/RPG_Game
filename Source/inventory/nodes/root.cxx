#include "root.hpp"

bool Root::run() {
    return child->run();
}

void Root::set_child(Node *new_child)  {child = new_child;}