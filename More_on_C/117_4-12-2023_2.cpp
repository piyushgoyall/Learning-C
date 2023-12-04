// PURE VIRTUAL FUNCTION (class which contains pure virtual function is called ABSTRACT CLASS).

#include <bits/stdc++.h>
using namespace std;

// ABSTRACT CLASS
class Shape
{
protected:
    double dimension;

public:
    void
    getDimension()
    {
        cin >> dimension;
    }

    // pure virtual Function
    virtual double calculateArea() = 0;
};

class Square : public Shape
{
public:
    double calculateArea()
    {
        return dimension * dimension;
    }
};

class Circle : public Shape
{
public:
    double calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};

int main()
{
    Square square;
    Circle circle;

    cout << "Enter length of square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;
    return 0;
}