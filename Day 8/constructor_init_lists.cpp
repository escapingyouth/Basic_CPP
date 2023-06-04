#include <iostream>
#include <string>

class Player
{

private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string name_val)
    {
        name = name_val;
    };

    std::string get_name()
    {
        return name;
    }

    // Overloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    : name{"None"}, health{0}, xp{0} {};

Player::Player(std::string name_val)
    : name{name_val}, health{0}, xp{0} {};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {};

int main()
{
    Player empty;
    Player michael{"Michael"};
    Player villain("Villain", 100, 55);

    return 0;
}