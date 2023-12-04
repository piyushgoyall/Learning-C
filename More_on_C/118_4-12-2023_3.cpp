// BINDING IN C++

#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base()
    {

        cout << "Base class constructor!" << endl;
    }

    // Defining virtual destructor.
    virtual ~Base()
    {
        // At last, it will be printed.
        cout << "Base class destructor!" << endl;
    }
};

class Child : public Base
{
public:
    Child()
    {
        cout << "Child class constructor!" << endl;
    }
    ~Child()
    {
        cout << "Child class destructor!" << endl;
    }
};

int main()
{
    // Object refers to the Base class .
    Base *b = new Child;

    // Deleting the pointer object.
    delete b;
    return 0;
}