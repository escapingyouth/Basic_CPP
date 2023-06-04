#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

int main()
{
    print(100);
    print(1012.3);

    print("C-style string");

    string s{"C++ string"};
    print(s);

    print("C-style string", s);

    vector<string> stooges{"Larry", "Moe", "Curly"};
    print(stooges);

    return 0;
}

void print(int num)
{
    cout << "Printing int: " << num << endl;
}
void print(double num)
{
    cout << "Printing double: " << num << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(string s, string t)
{
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v)
{
    cout << "Printing vector of strings:" << endl;

    for (auto s : v)
        cout << s << " ";
}