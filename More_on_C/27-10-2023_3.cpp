// Create three classes by name Day, Month and Year to store the day of the month, the month in two digits and the year in four digits respectively from the user.
// Now the print the entire date as dd-mm-yyyy format in main function().

#include <bits/stdc++.h>
using namespace std;
class Day
{

}
class Month
{

}
class Year
{
    
}
int main()
{
    
    return 0;
}


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