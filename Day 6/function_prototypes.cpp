#include <iostream>
#include <cmath>
using namespace std;

// function protoypes
void area_circle();
double calc_area_circle(double radius);

void volume_cylinder();
double calc_volume_cylinder(double, double);

const double PI{3.14159};

int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_area_circle(double radius)
{
    return PI * pow(radius, 2);
}

void area_circle()
{
    double radius{};
    cout << "Enter the radius: ";
    cin >> radius;

    cout << "The radius of the circle is " << calc_area_circle(radius) << endl;

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