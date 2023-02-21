#include <iostream>
using namespace std;

int main()
{

    // declaring and initializing luckyNumbers array
    int luckyNumbers[]{4, 8, 15, 23, 99};

    cout << luckyNumbers[0] << endl;

    // reassigning elements of an array
    luckyNumbers[5] = 100;

    cout << luckyNumbers[5] << endl;

    // multi-dimensional arrays
    int movie_rating[3][4]{
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}};

    return 0;
}