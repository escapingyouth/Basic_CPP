#include <iostream>

using namespace std;

void sayHi(string userName)
{

    cout << "Hello " << userName << endl;
}

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int addNumbers(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

int main()
{

    string userName;

    cout << "Enter your name: ";
    cin >> userName;
    sayHi(userName);

    int x = 9, y = 5;
    int sum = addNumbers(x, y);
    cout << "The sum of the two numbers is: " << sum << endl;

    double answer = cube(5.0);
    cout << answer << endl;

    return 0;
};