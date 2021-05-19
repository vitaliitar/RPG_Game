#pragma once

#ifndef SEQUENCE_NODE_HPP
#define SEQUENCE_NODE_HPP

#include <vector>
#include <algorithm>
#include "node.hpp"
#include "composite_node.hpp"

class Sequence : public CompositeNode {
public:
    virtual bool run() override;
};

#endif // SEQUENCE_NODE_HPP

