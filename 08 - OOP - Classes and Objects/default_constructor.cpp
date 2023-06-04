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

    // default constructor/no args
    Player()
    {
        name = "None";
        health = 100;
        xp = 3;
    }

    // no-default constructor
    Player(std::string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

int main()
{
    Player michael;
    michael.set_name("Michael");
    std::cout << michael.get_name() << std::endl;

    return 0;
}