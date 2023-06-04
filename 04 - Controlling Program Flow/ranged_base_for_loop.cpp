#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int scores[]{10, 20, 30};

    for (int score : scores)
        cout << score << endl;

    vector<double> temperatures{87.9, 77.9, 80.0, 72.5};
    double average_temp{};

    double running_sum{};

    for (auto temp : temperatures)
    {
        running_sum += temp;
    }

    cout << fixed << setprecision(1); 

    average_temp = running_sum / temperatures.size();
    cout << average_temp << endl;

    return 0;
}