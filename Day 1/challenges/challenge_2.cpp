/*
 * Challenge 2
 * ===================
 * Michael's Carpet Cleaning Service
 * Charges:
 *	$25 per small room
 *	$35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 *
 * Prompt the user for the number of small and large rooms they would like cleaned
 * and provide an estimate such as:
 *
 * Estimate for carpet cleaning service
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * ============================================
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 */

#include <iostream>

using namespace std;

int main()
{
    const int price_per_small_room{25}; // dollars
    const int price_per_large_room{35}; // dollars

    const int estimate_expiry{30};

    const double sales_tax{0.06};

    double cost{0};     // dollars
    double estimate{0}; // dollars

    cout << "Welcome to Michael's carpet cleaning services :)" << endl
         << endl;

    int small_rooms{0};
    int large_rooms{0};

    cout << "How many small rooms would you like cleaned: ";
    cin >> small_rooms;

    cout << "How many large rooms would you like cleaned: ";
    cin >> large_rooms;

    cout << "\nEstimate for carpet cleaning service\n"
         << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;

    cout << "\nPrice per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    cost = (small_rooms * price_per_small_room) + (large_rooms * price_per_large_room);
    cout << "\nCost: $" << cost << endl
         << endl;
    ;

    estimate = 1.06 * cost;
    cout << "Total estimate: $" << estimate << endl;

    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    return 0;
}