
#pragma once

#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>
#include <map>

#include "../inventory/inventory.hpp"
#include "../inventory/item.hpp"

struct Stats {
    std::string m_id;
    std::string m_name;
    int points;
    int m_max_hp;
    int m_hp;
    int m_attack_power;
    int m_defense_power;
};

class Entity : public Inventory {
public:
    Entity(Stats stats);

    void attack(Entity* target);

    virtual std::multimap<std::string, Item*>& items();
    virtual const std::multimap<std::string, Item*>& items() const;

protected:
    Stats m_stats;
    std::multimap<std::string, Item*> m_items;
};

#endif // ENTITY_HPP