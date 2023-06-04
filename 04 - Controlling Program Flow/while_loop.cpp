#include <iostream>

using namespace std;

int main()
{
    int num{};
    cout << "Enter a positive integer - start the countdown ";
    cin >> num;

    while (num > 0)
    {
        cout << num << endl;
        num--;
    }
    cout << "Blast off!" << endl;

    bool done{false};
    int number{};

    while (!done)
    {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;

        if (number <= 1 || number >= 5)
        {
            cout << "Out of range, try again" << endl;
        }
        else
        {
            cout << "Thanks" << endl;
            done = true;
        }
    }
}