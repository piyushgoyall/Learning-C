// Create a class called "BankAccount" and initialize the balance(must be private) with Rs.2000
// Now create two member function called "Withdraw()" and "deposit()" to withdraw and deposit the amount, respectively.These functions should accept the amount as a
// parameter.
// Create another function member called "showbalance()" to display the balance after every withdrawl and deposit transactions.

#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount()
    {
        balance = 2000;
    }

    void deposit(double amount)
    {
        balance += amount;
        showBalance();
    }

    void withdraw(double amount)
    {
        balance -= amount;
        showBalance();
    }

    void showBalance()
    {
        cout << "Current balance: Rs." << balance << endl;
    }
};

int main()
{
    BankAccount account;

    double depositAmount = 5000;
    double withdrawalAmount = 3000;

    account.deposit(depositAmount);
    account.withdraw(withdrawalAmount);

    return 0;
}
