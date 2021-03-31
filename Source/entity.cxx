#include "entity.hpp"

Entity::Entity(Stats stats) {
    this->m_stats = stats;
}

void Entity::attack(Entity *target) {
    target->m_stats.m_hp -= m_stats.m_attack_power;
}