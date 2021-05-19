
#pragma once

#ifndef ACTION_HPP
#define ACTION_HPP

#include "item_manager.hpp"
#include "nodes/node.hpp"

class Action : public Node {
private:
    std::string name;
    int probabilityOfSuccess;
public:
    Action (const std::string newName, int prob);
private:
    virtual bool run() override;
};

#endif // ACTION_HPP