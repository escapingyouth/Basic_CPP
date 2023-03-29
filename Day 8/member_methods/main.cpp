#include <iostream>
#include "Account.h"

using namespace std;

int main()
{

    Account michael_account;
    michael_account.set_name("Michael's account");
    michael_account.set_balance(1000.0);

    if (michael_account.deposit(200.0))

        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not allowed" << endl;

    if (michael_account.withdraw(500.0))

        cout << "Withdraw OK" << endl;
    else
        cout << "Insufficient funds" << endl;

    if (michael_account.withdraw(1500.0))

        cout << "Withdraw OK" << endl;
    else
        cout << "Insufficient funds" << endl;

    return 0;
}