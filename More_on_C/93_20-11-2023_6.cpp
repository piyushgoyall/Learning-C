// Q-14 (Operator overloading)
// Create a class 'Increment' with an integer private data menber called "number".
// Define a operator function to increment the value of "number" variable by 2 when operator ++ as prefix is used on the object.
// You should ask the number from the user which you want to increment.

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
    return 0;
}