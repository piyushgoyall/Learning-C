// OPERATOR OVERLOADING (POSTFIX)

#include <bits/stdc++.h>
using namespace std;
class Count
{
private:
    int value;

public:
    // Constructor to initialize value
    Count()
    {
        value = 7;
    }

    // Function Overloading for ++ when used as postfix
    void operator++(int)
    {
        value = value + 2;
    }
    void Display()
    {
        cout << "Count: " << value << endl;
    }
};
int main()
{
    Count count1;
    // Calling operator function
    count1++; // increments value by 2

    count1.Display();
    return 0;
}