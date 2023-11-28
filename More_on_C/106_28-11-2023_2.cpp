// HIERARCHICAL INHERITANCE

#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int a, b;
    void Inputdata()
    {
        cout << "Enter two nos: ";
        cin >> a >> b;
    }
};

class Child1 : public Parent
{
public:
    // Print Sum.
    void sum()
    {
        // Inputdata();
        cout << "Sum = " << a + b;
        cout << "\n";
    }
};

class Child2 : public Parent
{
public:
    // Print difference.
    void difference()
    {
        // Inputdata();
        cout << "Difference = " << abs(a - b);
        cout << "\n";
    }
};

class Child3 : public Parent
{
public:
    // Print multiplication

    void multiply()
    {
        // Inputdata();
        cout << "Product = " << a + b;
        cout << "\n";
    }
};

int main()
{
    Child1 x;
    Child2 y;
    Child3 z;

    x.Inputdata();
    x.sum();

    y.Inputdata();
    y.difference();

    z.Inputdata();
    z.multiply();

    return 0;
}