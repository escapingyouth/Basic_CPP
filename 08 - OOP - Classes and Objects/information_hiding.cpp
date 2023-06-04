#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{

private:
    // attributes

    string name{"Player"};
    int health{0};
    int xp;

public:
    // methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

int main()
{

    Player michael;
    // michael.name = "Michael"; // error name is a private attribute

    return 0;
}