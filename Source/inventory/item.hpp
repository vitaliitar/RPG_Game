
#pragma once

#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item {
public:
    Item(std::string& name, std::string& desc, int value, int volume);

private:
    std::string m_name;
    std::string m_desc;
    int m_value;
    int m_volume;
};

#endif // ITEM_HPP