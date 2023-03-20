#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // declaring vectors
    vector<char> vowels;

    // declaring and initializing vectors
    vector<int> test_scores{100, 95, 99};

    vector<double> cwa(3); // 3 elements all initialized to 0

    vector<int> math_scores(3, 100); // 3 elements all initialized to 100

    // accessing elements in vectors
    vowels = {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[1] << endl;
    cout << vowels.at(3) << endl;

    // adding new elements to vectors
    test_scores.push_back(80); // 100 95,99,80
    test_scores.push_back(90); // 100, 95, 99, 80, 90

    // finding the size of a vector
    cout << test_scores.size() << endl;

    // multidimensional vectors

    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 5, 5},
        {1, 3, 4, 5},
    };

    cout << movie_ratings[1][1] << endl;
    cout << movie_ratings.at(2).at(3) << endl;

    return 0;
}