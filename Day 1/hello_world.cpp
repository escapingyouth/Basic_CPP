// #include <iostream> is a header file in C++ that provides input/output operations such as cout and cin.
// It is important because it allows the programmer to interact with the user and display results of computations.

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!" << std::endl;
    cout << "Number 1\n";
    cout << "Number 2" << endl;

    int value = 10;
    cout << "value: " << value << endl;

    int firstNumber = 13;
    int secondNumber = 5;

    int sum = firstNumber + secondNumber;

    cout << "Sum: " << sum << endl;
    return 0;
}
