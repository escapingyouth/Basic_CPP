#include <iostream>
using namespace std;

int main()
{

    int luckyNumbers[] = {4, 8, 15, 23, 99};

    cout << luckyNumbers[0] << endl;

    luckyNumbers[0] = 19;
    cout << luckyNumbers[0] << endl;

    luckyNumbers[5] = 100;

    cout << luckyNumbers[5] << endl;

    return 0;
}