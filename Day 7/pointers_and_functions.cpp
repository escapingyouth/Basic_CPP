#include <iostream>
#include <vector>
#include <string>

using namespace std;

void double_data(int *int_ptr);
void swap(int *, int *);
void display(const vector<string> *v);
void display(const int *array, int sentinel);

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *v)
{
    for (auto str : *v)
        std::cout << str << " ";
    std::cout << std::endl;
}
void display(const int *array, int sentinel)

{
    while (*array != sentinel)
    {
        std::cout << *array << " ";
        array++;
        // or we could just use the one-liner below which increases the value and address
        // std::cout << *array++ << " " <<;
    }
}

int main()
{

    int value{10};
    int *int_ptr{nullptr};

    std::cout << "Value: " << value << std::endl;

    double_data(&value);
    std::cout << "Value: " << value << std::endl;

    std::cout << "\n--------------------" << std::endl;

    int_ptr = &value;
    double_data(int_ptr);
    std::cout << "Value: " << value << std::endl;

    std::cout << "\n--------------------" << std::endl;

    int x{100}, y{200};
    std::cout << "\nx: " << x << std::endl;
    std::cout << "\ny: " << y << std::endl;

    swap(&x, &y);
    std::cout << "\nx: " << x << std::endl;
    std::cout << "\ny: " << y << std::endl;

    std::cout << "\n--------------------" << std::endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    std::cout << "\n--------------------" << std::endl;
    int scores[]{100, 98, 97, 79, 85, -1};
    display(scores, -1);

    return 0;
}