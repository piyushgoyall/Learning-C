// OPERATOR OVERLOADING
// In this code, we have reversed the default behaviour of binary == operator.

#include <bits/stdc++.h>
using namespace std;
class Compare
{
    double number;

public:
    Compare(double n1) : number(n1) {}

    // Overload the == operator
    bool operator==(Compare obj)
    {
        if (number == obj.number)
            return false;
        else
            return true;
    }
};
int main()
{
    Compare m1(63);
    Compare m2(65);

    if (m1 == m2)
    {
        cout << "m1 is equal to m2!";
    }
    else
    {
        cout << "m1 is not equal to m2!";
    }
    return 0;
}