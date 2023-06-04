#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num)
{
    num = 1000;
}

void pass_by_ref2(string &s)
{
    s = "Changed";
}

void pass_by_ref3(vector<string> &v)
{
    v.clear();
}

void print_vector(vector<string> &v)
{
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}

int main()
{
    int num{10};
    int another_num{20};

    string s{"Michael"};

    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);

    cout << "num after calling pass_by_ref1: " << num << endl;

    cout << "another_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);

    cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    cout << "s before calling pass_by_ref2: " << s << endl;
    pass_by_ref2(s);
    cout << "s after calling pass_by_ref2: " << s << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);

    cout << "\nstooges after calling pass_by_value3: ";
    print_vector(stooges);
}