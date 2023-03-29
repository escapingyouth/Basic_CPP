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

    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
}

int main()
{
    Player empty;                       // None, 0, 0
    Player michael{"Michael"};          // Michael, 0, 0
    Player hero{"Hero", 100};           // Hero, 100, 0
    Player villain("Villain", 100, 55); // Villain, 100, 55

    std::cout << michael.get_name() << std::endl;

    return 0;
}