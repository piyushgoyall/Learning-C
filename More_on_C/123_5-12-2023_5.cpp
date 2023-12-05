// THROWING FROM A FUNCTION.

#include <bits/stdc++.h>
using namespace std;

void myFunc(int a, int b) // throw (int, int) // DYNAMIC EXCCEPTION SPECIFICATION
{
    if (a <= 0)
    {
        throw(a);
    }
    else if (b > 100)
    {
        throw(b);
    }
    else
    {
        cout << "Sum is: " << a + b << endl;
    }
}

int main()
{
    try
    {
        myFunc(2, 700);
    }
    catch (int x)
    {
        cout << "Invalid value: " << x;
    }
    return 0;
}