#include <iostream>

class Fraction
{
public:
    Fraction(int n, int d) : numerator(n), denominator(d) {}
    Fraction operator+(const Fraction &other) const
    {
        int num = numerator * other.denominator + denominator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

private:
    int numerator;
    int denominator;
};

int main()
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3 = f1 + f2; // equivalent to f3 = f1.operator+(f2);

    return 0;
}