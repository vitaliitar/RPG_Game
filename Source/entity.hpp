
#pragma once

#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>

struct Stats {
    std::string m_id;
    std::string m_name;
    int m_max_hp;
    int m_hp;
    int m_attack_power;
    int m_defense_power;
};

class Entity {
public:
    Entity(Stats stats);

    void attack(Entity* target);

private:
    Stats m_stats;
};

#endif // ENTITY_HPP