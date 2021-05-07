#include "entity.hpp"

Entity::Entity(Stats stats) {
    this->m_stats = stats;
}

void Entity::attack(Entity *target) {
    target->m_stats.m_hp -= m_stats.m_attack_power;
}

std::multimap<std::string, Item *> & Entity::items() {
    return m_items;
}

const std::multimap<std::string, Item *> & Entity::items() const {
    return m_items;
}