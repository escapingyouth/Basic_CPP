#include <iostream>

class Shallow
{

private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }

    // Constructor
    Shallow(int d);

    // Copy constructor
    Shallow(const Shallow &source);

    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data{source.data}
{

    // a shallow copy of the pointer is made
    std::cout << "Copy constructor - shallow copy" << std::endl;
}

Shallow::~Shallow()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_shallow(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;
}

int main()
{
    Shallow obj1{100};
    display_shallow(obj1);

    Shallow obj2{obj1};
    obj2.set_data_value(1000);

    return 0;
}