// Catch all block

#include <bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        int age = 16;
        if (age >= 18)
        {
            cout << "Access granted.";
        }
        else
        {
            throw 123; // throwing any random value
        }
    }
    catch (...)
    {
        cout << "Access denied!";
    }
    return 0;
}