#pragma once

#ifndef SELECTOR_NODE_HPP
#define SELECTOR_NODE_HPP

#include <vector>
#include <algorithm>
#include "node.hpp"
#include "composite_node.hpp"


class Selector : public CompositeNode {
public:
    virtual bool run() override;
};

#endif // SELECTOR_NODE_HPP