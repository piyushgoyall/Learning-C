// Dynamic constructor.

#include <bits/stdc++.h>
using namespace std;
class classA
{
    int *value;

public:
    classA() // Default construcutor
    {
        value = new int; // Memory allocation at run time
        *value = 100;
    }
    classA(int val) // Parameterised constructor
    {
        value = new int; // Memory allocation at run time
        *value = val + 1;
    }
    void showValue()
    {
        cout << *value << endl;
    }
    ~classA()
    {
        delete value;
    }
};
int main()
{
    classA a1;      // Calling default constructor
    classA a2(200); // Calling parameterised constructor
    cout << "Value of a1: ";
    a1.showValue();
    cout << "Value of a2: ";
    a2.showValue();
    return 0;
}