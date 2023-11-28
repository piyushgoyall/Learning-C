// HIERARCHICAL INHERITANCE

#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int a, b;
    void Inputdata()
    {
        cout << "\nEnter two nos: ";
        cin >> a >> b;
    }
};

class Child1 : public Parent
{
public:
    // Print Sum.
    void sum()
    {
        cout << "\nSum = " << a + b;
    }
};

class Child2 : public Parent
{
public:
    // Print difference.
    void difference()
    {
        cout << "\nDifference" << abs(a - b);
    }
};

class Child3 : public Parent
{
public:
    // Print multiplication

    void multiply()
    {
        cout << "\nProduct = " << a + b;
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
    y.sum();

    z.Inputdata();
    z.sum();

    return 0;
}