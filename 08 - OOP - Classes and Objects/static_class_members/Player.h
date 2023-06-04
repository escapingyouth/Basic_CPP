#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
    static int num_players; // static member variable
    std::string name;
    int health;
    int xp;

public:
    static int get_num_players(); // static member function
    std::string get_name() const;
    int get_health() const;
    int get_xp() const;

    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    ~Player();
};

#endif
