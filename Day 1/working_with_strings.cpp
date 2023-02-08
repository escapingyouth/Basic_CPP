#include <iostream>

using namespace std;

int main()
{
    cout << "Time is an illusion" << endl;

    string message = "Call me back ASAP!";

    cout << message << endl;

    // string methods
    cout << message.length() << endl;

    cout << message[2] << endl;

    message[0] = 'K';

    cout << message << endl;

    cout << message.find("ASAP!") << endl;

    cout << message.substr(0, 4) << endl;
    return 0;
}