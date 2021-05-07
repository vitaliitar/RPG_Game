
#pragma once

#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "item.hpp"

class Inventory {
public:
    virtual std::multimap<std::string, Item*>& items() = 0;
    virtual const std::multimap<std::string, Item*>& items() const = 0;
};

#endif // INVENTORY_HPP