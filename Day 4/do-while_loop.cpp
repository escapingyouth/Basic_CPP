#include <iostream>

using namespace std;

int main()
{
    // int number{};

    // do
    // {
    //     cout << "Enter an integer between 1 and 5: ";
    //     cin >> number;
    // } while (number <= 1 || number >= 5);

    // cout << "Thanks" << endl;

    char selection{};

    // do
    // {
    //     double width{}, height{};
    //     cout << "Enter width and height separated by a space: ";
    //     cin >> width >> height;

    //     double area{width * height};
    //     cout << "The area is " << area << endl;

    //     cout << "Calculate another? (Y/N) : ";
    //     cin >> selection;
    // } while (selection == 'Y' || selection == 'y');

    do
    {
        cout << "\n-----------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;

        cout << "\nEnter your selection: ";
        cin >> selection;

        switch (selection)
        {
        case '1':
            cout << "You chose 1 - doing this" << endl;
            break;

        case '2':
            cout << "You chose 2 - doing that" << endl;
            break;

        case '3':
            cout << "You chose 3 - doing something else" << endl;
            break;

        case 'q':
        case 'Q':
            cout << "Goodbye" << endl;
            break;
        default:
            cout << "Invalid selection. Try again" << endl;
        }

    } while (selection != 'Q' && selection != 'q');

    return 0;
}