#include "entity.hpp"

Entity::Entity(const std::string id, std::string name, int hp, int max_hp, int attack_power, int defense_power)
: m_id(id) {
    this->m_name = name;
    this->m_hp = hp;
    this->m_max_hp = max_hp;
    this->m_attack_power = attack_power;
    this->m_defense_power = defense_power;
}

void Entity::attack(Entity *target) {

    target->m_hp -= m_attack_power;

}