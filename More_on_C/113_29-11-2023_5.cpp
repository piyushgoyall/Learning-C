// FUNCTION OVERRIDING
// CALL OVERRIDE FUNCTION USING POINTER

// FUNCTION OVERRIDING

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

// To Call The Override Function From Derived class
class Child : public Parent
{
public:
    void myFunction()
    {
        cout << "Derived Class Function" << endl;
        Parent::myFunction(); 
    }
};


// class Child : public Parent
// {
// public:
//     void myFunction()
//     {
//         cout << "Derived Class Function" << endl;
//     }
// };

int main()
{
    Child childobj;
    childobj.myFunction();
    return 0;
}