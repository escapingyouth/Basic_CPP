// Section 14
// Mystring - starting point
#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a{"Hello"}; // overloaded constructor
    Mystring b;          // no-args constructor

    b = a; // b.operator=(a);

    b = "This is a test"; // b.operator=("This is a test")

    b = a;
    Mystring empty;          // no-args constructor
    Mystring larry("Larry"); // overloaded constructor
    Mystring stooge{larry};  // copy constructor

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}
