// FUNCTION OVERRIDING
// Call override function using scope resolution

#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void myFunction()
    {
        cout << "Base Class Function" << endl;
    }
};

class Child : public Parent
{
public:
    void myFunction()
    {
        cout << "Derived Class Function!" << endl;
    }
};

int main()
{
    Child Childobj;
    // calling Base class Function using scope resolution
    Childobj.Parent::myFunction();
    return 0;
}