#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num{10};
    cout << "Value of num is: " << num << endl;      // 10
    cout << "size of num is:" << sizeof num << endl; // 4
    cout << "Address of num is: " << &num << endl;   // 0x61ff1c

    int *p;
    cout << "Value of p is: " << p << endl;          // 0x61ff60 - garbage
    cout << "Address of p is: " << &p << endl;       // 0x61ff18
    cout << "size of of p is: " << sizeof p << endl; // 4

    p = nullptr;
    cout << "\nValue of p is: " << p << endl; // 0

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "\nsize of p1 is: " << sizeof p1 << endl;
    cout << "\nsize of p2 is: " << sizeof p2 << endl;
    cout << "\nsize of p3 is: " << sizeof p3 << endl;
    cout << "\nsize of p4 is: " << sizeof p4 << endl;
    cout << "\nsize of p5 is: " << sizeof p5 << endl;

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};

    score_ptr = &score;
    // score_ptr = &high_temp; // compiler error

    cout << score_ptr << endl;

    return 0;
}