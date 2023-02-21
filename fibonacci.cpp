#include <iostream>

using namespace std;

void fibonacci_sequence()
{
}

int main()
{

    int number_of_terms, first_term = 0, second_term = 1, next_term;

    cout << "Enter the number of terms: ";
    cin >> number_of_terms;
    cout << "The fibonacci sequence is :" << endl;

    for (int i = 0; i < number_of_terms; number_of_terms++)
    {

        if (i <= 1)
        {
            next_term = i;
        }
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }
        cout << next_term << "";
    }

    return 0;
}