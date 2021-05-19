#pragma once

#ifndef RANDOM_SELECTOR_NODE_HPP
#define RANDOM_SELECTOR_NODE_HPP

#include <vector>
#include <algorithm>
#include "node.hpp"
#include "composite_node.hpp"

class RandomSelector : public CompositeNode {
public:
    virtual bool run() override;
};

#endif // RANDOM_SELECTOR_NODE_HPP