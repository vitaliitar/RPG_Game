
#pragma once

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

#include "entity.hpp"

class Player : public Entity {
public:
    Player(Stats stats);
};

#endif // PLAYER_HPP