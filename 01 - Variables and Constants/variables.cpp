#include <iostream>
using namespace std;

int main()
{
    // variables can be declared and initialized in one line
    string characterName = "Mike";

    // recommended way of declaring variables
    int months_of_the_year{12};

    // variables can be declared and initialized in two lines
    int characterAge;
    characterAge = 35;

    cout << "There are " << months_of_the_year << " months in a year" << endl
         << endl;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    return 0;
}