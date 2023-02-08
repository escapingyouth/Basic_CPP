#include <iostream>

using namespace std;

int addNumbers(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

int main()
{
    int x = 9;
    int y = 5;

    int sum = addNumbers(x, y);

    cout << "The sum of the two numbers is: " << sum << endl;

    return 0;
};