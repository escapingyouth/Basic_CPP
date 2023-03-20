#include <iostream>

using namespace std;

// Example factorial
unsigned long long factorial(unsigned long long n);

// Example fibonacci sequence
unsigned long long fibonacci(unsigned long long n);

int main()
{
    cout << factorial(8) << endl;  // 40320
    cout << fibonacci(30) << endl; // 832040
    return 0;
}

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // recursion
}