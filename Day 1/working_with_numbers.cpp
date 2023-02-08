#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout << 10 / 3 << endl;
    cout << 9 + 2 << endl;
    cout << 10 % 3 << endl;
    cout << 4 + 5 * 10 << endl;

    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    cout << wnum << endl;

    wnum += 80;
    cout << wnum << endl;

    cout << pow(2, 3) << endl;
    cout << sqrt(36) << endl;

    cout << round(4.3) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.9) << endl;

    cout << fmax(3, 10) << endl;
    cout << fmin(3, 10) << endl;

    return 0;
}