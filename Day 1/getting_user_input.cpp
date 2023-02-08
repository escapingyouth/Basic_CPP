#include <iostream>
using namespace std;

int main()
{

    string name;
    int age;

    cout << "Enter your name: ";
    // getline() is used to get a string with spaces
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << ", you are " << age << " years old" << endl;

    return 0;
}