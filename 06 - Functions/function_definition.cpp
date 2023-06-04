#include <iostream>
#include <cmath>
using namespace std;

const double PI{3.14159};

double calc_area_circle(double radius)
{
    return PI * pow(radius, 2);
}

void area_circle()
{
    double radius{};
    cout << "Enter the radius: ";
    cin >> radius;

    cout << "The area of the circle is " << calc_area_circle(radius) << endl;

    return;
}

double calc_volume_cylinder(double radius, double height)
{

    return calc_area_circle(radius) * height;
}

void volume_cylinder()
{
    double radius{};
    double height{};

    cout << "\nEnter the radius of the cyclinder: ";
    cin >> radius;

    cout << "\nEnter the height of the cyclinder: ";
    cin >> height;

    cout << "The volume of the cylinder is " << calc_volume_cylinder(radius, height) << endl;
}

int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}