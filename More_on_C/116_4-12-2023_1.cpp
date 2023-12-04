// VIRTUAL FUNCTION

#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base function called!" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derivedd function called!" << endl;
    }
};

int main()
{
    Derived derived1;

    // pointer of base type that points to derived1
    Base *base1 = &derived1;

    // calls member function of Base Class
    base1->show();
    return 0;
}


// // This code does not override the member function of Base class

// #include <bits/stdc++.h>
// using namespace std;

// class Base
// {
// public:
//     void show()
//     {
//         cout << "Base function called!" << endl;
//     }
// };

// class Derived : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derivedd function called!" << endl;
//     }
// };

// int main()
// {
//     Derived derived1;

//     // pointer of base type that points to derived1
//     Base *base1 = &derived1;

//     // calls member function of Base Class
//     base1->show();
//     return 0;
// }