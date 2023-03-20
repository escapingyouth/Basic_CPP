/*
 *  Challenge 7
 * ====================
 * Recall the challenge from challenge 5.
 * Your challenge for  is to modularize your solution to challenge 5
 *  by refactoring your solution so that it uses functions.
 *
 * You decide how to modularize the program.
 * You can use my solution which is included in this file, or modularize your solution.
 *
 * Here are a few hints:
 * - Create functions for each major function
 * - Keep the functions small
 * - Remember the Boss/Worker analogy
 * - Keep the vector declaration in the main function and pass the
 *   vector object to any function that requires it.
 *
 * DO NOT move the vector object outside main and make it a global variable.
 *
 * - You can start by defining a function that displays the menu
 * - You can then define a function that reads the selection from the user and returns it in uppercase
 * - Create functions for each menu option
 * - Create functions that display the list of numbers, calculates the mean and so forth
 *
 * Take it one function at a time and take your time.
 * If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
 *
 * Finally, don't forget use function prototypes!
 *
 * Good luck -- I know you can do it!
 */

#include <iostream>
#include <vector>

using namespace std;

void display_menu();                     // function to display menu
char get_choice();                       // fucntion to read user selection
void print_numbers(const vector<int> v); // function to display numbers
void add_number(vector<int> &v);         // function to add a number
void calc_mean(const vector<int> v);     // function to calculate mean
void get_smallest(const vector<int> v);  // function to get smallest number
void get_largest(const vector<int> v);   // function to get largest number
void exit_program();                     // function to exit program

int main()
{
    vector<int> data_list{1, 2, 3, 4};
    char choice{};

    do
    {
        display_menu();
        choice = get_choice();

        switch (choice)
        {
        case 'p':
        case 'P':
            print_numbers(data_list);
            break;

        case 'a':
        case 'A':
            add_number(data_list);
            break;

        case 'm':
        case 'M':
            calc_mean(data_list);
            break;

        case 's':
        case 'S':
            get_smallest(data_list);
            break;

        case 'l':
        case 'L':
            get_largest(data_list);
            break;

        case 'q':
        case 'Q':
            exit_program();
            break;

        default:
            cout << "Unknown selection, please try again" << endl;
        }

        cout << endl;
    } while (choice != 'q' && choice != 'Q');

    return 0;
}

void display_menu()
{
    cout << "\n********************" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}

char get_choice()
{
    char selection{};

    cout << "\nEnter your choice: ";
    cin >> selection;

    return toupper(selection);
}

void print_numbers(const vector<int> v)
{
    if (v.size() == 0)
        cout << "[] - the list is empty" << endl;

    else
    {
        cout << "[";
        for (auto value : v)
            cout << " " << value << " ";
        cout << "]" << endl;
    }
}

void add_number(vector<int> &v)
{
    int new_entry{};

    cout << "Enter an integer to add to the list: ";
    cin >> new_entry;

    v.push_back(new_entry);

    cout << new_entry << " was added" << endl;
}

void calc_mean(const vector<int> v)
{
    if (v.size() == 0)
        cout << "Unable to calculate the mean - no data" << endl;
    else
    {
        int running_sum{};

        for (auto value : v)
        {
            running_sum += value;
        }
        double average = static_cast<double>(running_sum) / v.size();

        cout << "The average is " << average << endl;
    }
}

void get_smallest(const vector<int> v)
{
    if (v.size() == 0)
        cout << "Unable to determine the smallest number - list is empty" << endl;
    else
    {
        int min_num{v[0]};

        for (auto value : v)
        {
            if (value < min_num)
                min_num = value;
        }

        cout << "The smallest number is " << min_num << endl;
    }
}

void get_largest(const vector<int> v)
{
    if (v.size() == 0)
        cout << "Unable to determine the largest number - list is empty" << endl;
    else
    {
        int max_num{v[0]};

        for (auto value : v)
        {
            if (value > max_num)
                max_num = value;
        }

        cout << "The largest number is " << max_num << endl;
    }
}

void exit_program()
{
    cout << "Goodbye!" << endl;
}