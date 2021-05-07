#include "item.hpp"

Item::Item(std::string &name, std::string &desc, int value, int volume) :
    m_name(name), m_desc(desc), m_value(value), m_volume(volume) {}