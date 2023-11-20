// RETURNING OBJECT FROM OPERATOR FUNCTION

#include <bits/stdc++.h>
using namespace std;
class Count
{
private:
    int value;

public:
    // Constructor to initialize value
    Count() { value = 100; }

    // Function Overloading for ++ when used as postfix
    Count operator++(int)
    {
        Count temp;
        temp.value = value + 2;
        return temp;
    }
    void Display()
    {
        cout << "Count: " << value << endl;
    }
};
int main()
{
    Count count1, result;
    // Calling operator function
    result = count1++; // increment value by 2
    result.Display();
    return 0;
}