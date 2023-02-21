#include <iostream>
#include <cmath>

using namespace std;

double calculate_bmi(double height, double weight)
{
    double height_in_meters = height / 100;
    double bmi = weight / (pow(height_in_meters, 2));
    return bmi;
}

int main()
{

    bool isFedUp = true;
    double height, weight;
    cout << "Enter your height in centimeters: ";
    cin >> height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    double bmi = calculate_bmi(height, weight);
    cout << "Your BMI is " << bmi << endl;

    if (bmi < 18.5)
    {
        cout << "You're underweight." << endl;
    }

    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        cout << "You have a normal weight." << endl;
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        cout << "You're overweight." << endl;
    }
    else if (bmi >= 30 && bmi <= 39.9)
    {
        cout << "You're obese." << endl;
    }

    else if (bmi >= 40)
    {
        cout << "You're morbidly obese." << endl;
    }

    else
    {
        cout << "You have a normal weight." << endl;
    }

    return 0;
}
