#include <iostream>

class Deep
{

private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }

    // Constructor
    Deep(int d);

    // Copy constructor
    Deep(const Deep &source);

    // Destructor
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)

{
    data = new int;
    *data = *source.data;

    // a Deep copy of the pointer is made
    std::cout << "Copy constructor - Deep copy" << std::endl;
}

// using delegating constructor
// Deep::Deep(const Deep &source)
//     : Deep{*source.data}
// {
//     std::cout << "Copy constructor - Deep copy" << std::endl;
// }

Deep::~Deep()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_deep(Deep s)
{
    std::cout << s.get_data_value() << std::endl;
}

int main()
{
    Deep obj1{100};
    display_deep(obj1);

    Deep obj2{obj1};
    obj2.set_data_value(1000);

    return 0;
}