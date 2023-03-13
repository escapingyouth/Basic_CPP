#include <iostream>

using namespace std;

int main()
{
    int grid[5][3]{};

    for (int row{0}; row < 5; row++)
    {
        for (int col{0}; col < 3; col++)
            grid[row][col] = 1000;
    }

    for (int row{0}; row < 5; row++)
    {
        for (int col{0}; col < 3; col++)
            cout << grid[row][col] << " ";
    }

    return 0;
}