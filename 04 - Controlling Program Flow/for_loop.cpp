#include <iostream>
#include <vector>

using namespace std;

int main()
{

    for (int i{0}; i <= 10; i++)
    {
        cout << i << endl;
    }

    for (int i{1}; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    for (int i{10}; i > 0; i--)
    {
        cout << "Blast off!" << endl;
    }

    for (int i{1}, j{5}; i <= 5; i++, j++)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }

    vector<int> nums{10, 20, 30, 40, 50};

    for (unsigned int i{0}; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}