#include <iostream>

using namespace std;

int main()
{

    char letter_grade{};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "You need a 90 or above. Study Hard!" << endl;
        break;
    case 'b':
    case 'B':
        cout << "You need 80 - 89 for a B, Go study!" << endl;
        break;
    case 'c':
    case 'C':
        cout << "You need 70 - 79 for an average grade" << endl;
        break;
    case 'd':
    case 'D':
        cout << "You should strive for a better grade. All you need is 60-69" << endl;
        break;
    case 'f':
    case 'F':
        cout << "This is a terrible grade!" << endl;
        break;

    default:
        cout << "Sorry not a valid grade" << endl;
    }

    return 0;
}