#include <iostream>

using namespace std;

int main()
{
    int num{};

    cout << "Enter an integer: ";
    cin >> num;

    cout << num << ((num % 2 == 0) ? " is even" : " is odd") << endl;

    return 0;
}