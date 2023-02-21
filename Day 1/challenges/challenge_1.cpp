/*
 * Challenge 1
 * ===================
 * Create a C++ program that asks the user for their favorite number between 1 and 100
 * then read this number from the console.
 *
 * Suppose the user enters 24.
 *
 * Then display the following to the console.
 *
 * Amazing!! That's my favorite number too!
 * No really!!, 24 is my favorite number!
 *
 * Below are 2 sample runs of the program:
 * ==================================================
 * Enter your favorite number between 1 and 100: 24
 * Amazing!! That's my favorite number too!
 * No really!!, 24 is  my favorite number!
 */

#include <iostream>

using namespace std;

int main()
{
    int favourite_number;

    cout << "Enter your favourite number between 1 and 100: ";
    cin >> favourite_number;

    cout << "Amazing!! That's my favourite number too" << endl;
    cout << "No really!! " << favourite_number << " is my favourite number";

    return 0;
}