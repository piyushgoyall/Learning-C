// (OVERRIDING)
// Create two classes "Base" and "Derived".
// Create an overridden function with the name "getValue()".
// When calling the by base class, it should return 10.
// When calling by derived class, it should return 5.5

#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    double getValue()
    {
        return 10.0;
    }
};

class Derived : public Base
{
public:
    double getValue()
    {
        return 5.5;
    }
};

int main()
{
    Base baseObj;
    Derived derivedObj;

    cout << "Value from Base class: " << baseObj.getValue() << endl;
    cout << "Value from Derived class: " << derivedObj.getValue() << endl;

    return 0;
}
