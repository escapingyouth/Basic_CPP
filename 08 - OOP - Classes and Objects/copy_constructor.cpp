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

    int get_health()
    {
        return health;
    }
    int get_xp()
    {
        return xp;
    }

    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

    // Copy constructor
    Player(const Player &source);

    // Destructor
    ~Player()
    {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
}

Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp}
{
    std::cout << "Copy constructor - made a copy of: " << source.name << std::endl;
}

void display_player(Player p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}
int main()
{
    Player empty{"XXXXX", 100, 50}; // XXXXX, 100, 50

    Player my_new_object(empty);

    Player michael{"Michael"};          // Michael, 0, 0
    Player hero{"Hero", 100};           // Hero, 100, 0
    Player villain("Villain", 100, 55); // Villain, 100, 55

    display_player(my_new_object);

    return 0;
}