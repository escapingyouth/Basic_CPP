#include <iostream>
#include <cstdlib> // required for rand()
#include <ctime>   // required for time()

using namespace std;

int main()
{

    int random_number{};
    size_t count{10}; // number of  random numbers to generate

    int min{1}; // lower bound(inclusive)

    int max{6}; // upper bound(inclusive)

    // seed the random number generator
    // If you don't seed the generator you will get the same sequence  of random numbers everytime

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i{1}; i <= count; i++)
    {
        random_number = rand() % max + min;

        cout << random_number << endl;
    }

    return 0;
}