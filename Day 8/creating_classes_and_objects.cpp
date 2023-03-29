#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{

public:
    // attributes
    string name{"Player"};
    int health{0};
    int xp;

    // methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

class Account
{

public:
    // attributes

    string name{"Account"};
    double balance{0.0};

    // methods
    bool deposit(double amount)
    {
        balance += amount;

        cout << amount << " deposited" << endl;
    }
    bool withdraw(double amount)
    {
        balance -= amount;

        cout << amount << " withdrawn" << endl;
    }
};

int main()
{
    Account mike_account;
    Account dan_account;

    mike_account.name = "Mike's account";
    mike_account.balance = 5000.0;
    mike_account.deposit(100.0);
    mike_account.withdraw(50.0);

    Player michael;
    michael.name = "Michael";
    michael.health = 100;
    michael.xp = 10;
    michael.talk("Hi there");
    Player hero;

    Player players[]{michael, hero};

    vector<Player> player_vec{michael};
    player_vec.push_back(hero);

    Player *enemy = new Player();
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will annihilate you! Muah Ha Ha Ha");

    delete enemy;

    return 0;
}