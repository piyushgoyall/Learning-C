// EXCEPTIONAL HANDLING

#include <bits/stdc++.h>
using namespace std;

int main()
{
    try
    {
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if (age >= 18)
        {
            cout << "Access granted!";
        }
        else
        {
            throw(age);
        }
    }
    catch (int x)
    {
        cout << "Access denied, Age is: " << x << endl;
    }
    return 0;
}