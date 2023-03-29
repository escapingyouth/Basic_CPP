#include "Player.h"

int Player::num_players{0}; // static member variable definition

int Player::get_num_players() // static member function definition
{
    return num_players;
}

std::string Player::get_name() const
{
    return name;
}

int Player::get_health() const
{
    return health;
}

int Player::get_xp() const
{
    return xp;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    ++num_players;
}

Player::~Player()
{
    --num_players;
}