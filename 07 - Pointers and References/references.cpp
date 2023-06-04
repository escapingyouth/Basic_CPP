#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num{100};
    int &ref{num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "\n-----------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << "\n-----------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    cout << "\n-----------------------" << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};

    for (auto str : stooges)
        str = "Funny"; // changes the copy

    for (auto str : stooges)
        cout << str << endl; // Larry, Moe, Curly

    for (auto &str : stooges)
        str = "Funny"; // changes the actual

    for (auto const &str : stooges)
        cout << str << endl; // Funny, Funny, Funny

    return 0;
}