
#pragma once

#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>

class Entity {
public:

    // TODO replace for struct
    Entity(std::string id, std::string name, int hp, int max_hp, int attack_power, int defense_power);

    void attack(Entity* target);

private:
    const std::string m_id;
    std::string m_name;
    int m_max_hp;
    int m_hp;

    int m_attack_power, m_defense_power;


};

#endif // ENTITY_HPP