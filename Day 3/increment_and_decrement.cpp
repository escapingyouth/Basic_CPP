#include <iostream>

using namespace std;

int main()
{
    int counter{10};
    int result{0};

    // Example 1 - simple increment

    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

    cout << endl;

    // Example 2 - pre increment
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter; // note the pre increment

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;

    // Example 3 - pre increment
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++; // note the post increment

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;

    // Example 4 - pre increment + addition
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter + 10; // note the pre increment

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;

    // Example 5 - post increment + addition
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10; // note the pre increment

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;

    return 0;
}