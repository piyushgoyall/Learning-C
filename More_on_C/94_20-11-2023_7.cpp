// Q.15 (Opreator Overloading)
// Create a class 'Increment' with an integer private data member called "number".
// Define a operator function to increment the value of "number" by 2 when operator ++ as prefix is used and
// increment the value of "number" by 3 when operator ++ is used as postfix to the object. You should ask the number from the user which you want to incremeent.

#include <bits/stdc++.h>
using namespace std;
class Increment
{
private:
    int number;

public:
    // Constructor to initialize value
    Increment(int n)
    {
        number = n;
    }

    // Function Overloading for ++ when used as prefix
    void operator++()
    {
        number = number + 2;
    }

    void operator++(int)
    {
        number = number + 3;
    }

    void Display()
    {
        cout << "Count: " << number << endl;
    }
};
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Increment count1(num);
    // Calling operator function
    ++count1; // increment value by 2
    count1.Display();
    count1++;
    count1.Display();
    return 0;
}