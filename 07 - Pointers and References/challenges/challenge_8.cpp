/*
 * Challenge 8
 * ====================
 * Write a C++ function named apply_all that expects two arrays of integers and their sizes and
 * dynamically allocates a new array of integers whose size is the product of the 2 array sizes.
 *
 * The function should loop through the second array and multiple each element across each element
 * of array 1 and store the product in the newly created array.
 *
 * The function should return a pointer to the newly allocated array.
 *
 * You can also write a print function that expects a pointer to an array of integers and
 * its size and display the elements in the array.
 *
 * For example,
 *
 * Below is the output from the following code which would be in main:
 *
 * int array1[] {1, 2, 3, 4, 5};
 * int array2[] {10, 20, 30};
 *
 * cout << "Array 1: ";
 * print(array1, 5);
 *
 * cout << "Array 2: ";
 * print(array2, 3);
 *
 * int *results = apply_all(array1, 5, array2, 3);
 * cout << "Result: ";
 * print(results, 15);
 *
 * Output
 * ----------------------
 * Array 1: [ 1 2 3 4 5 ]
 * Array 2: [ 10 20 30 ]
 * Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
 */

#include <iostream>

using namespace std;

int *apply_all(int *, size_t, int *, size_t);
void print(const int *const, size_t);

int *apply_all(int *arr1, size_t size1, int *arr2, size_t size2)
{
    int *new_array{nullptr};

    new_array = new int[size1 * size2];

    int position{0};

    for (size_t i{0}; i < size2; i++)
    {
        for (size_t j{0}; j < size1; j++)
        {
            new_array[position] = arr1[j] * arr2[i];
            position++;
        }
    }
    return new_array;
}
void print(const int *const arr, size_t size)
{
    cout << "[ ";
    for (size_t i{0}; i < size; i++)

        cout << arr[i] << " ";

    cout << "]";
}

int main()
{

    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    cout << "Array 1: ";
    print(array1, 5);

    cout << "\nArray 2: ";
    print(array2, 3);

    cout << endl;

    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: ";
    print(results, 15);

    return 0;
}