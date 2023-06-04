#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    // attributes
    string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal)
    {
        balance = bal;
    };
    double get_balance()
    {
        return balance;
    };

    // methods that will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    // if verify amount
    balance += amount;
    return true;
}
bool Account::withdraw(double amount)
{
    if (balance - amount > 0)
    {

        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

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