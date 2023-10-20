// Q2) Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it.
// Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50.
// Make two constructors of this class as follows:
// 1- without any parameter - no amount will be added to the Piggie Bank
// 2- having a parameter which is the amount that will be added to the Piggie Bank
// Create an object of the 'AddAmount" class and display the final amount in the Piggie Bank.

#include <iostream>
using namespace std;

class AddAmount
{
private:
    int amount;

public:
    AddAmount()
    {
        amount = 50;
    }

    AddAmount(int additionalAmount)
    {
        amount = 50 + additionalAmount;
    }

    void displayAmount()
    {
        cout << "Final amount in the Piggy Bank: $" << amount << endl;
    }
};

int main()
{
    AddAmount piggyBank1;
    AddAmount piggyBank2(30);

    piggyBank1.displayAmount();
    piggyBank2.displayAmount();

    return 0;
}
