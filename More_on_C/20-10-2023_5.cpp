// Q.3 Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'.
// The class has three constructors which are:
// 1- having no parameter - values of both length and breadth are assigned zero
// 2- having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// 3- having one number as parameter - both length and breadth are assigned that number.
// Create objects of the 'Rectangle class having none, one and two parameters and print their areas.

#include <bits/stdc++.h>
using namespace std;
class Addition
{
private:
    int n1;
    int n2;
    int c;

public:
    Addition(int a, int b)
    {
        n1 = a;
        n2 = b;
        c = n1 + n2;
    }
    void Display()
    {
        cout << "Sum: " << c << endl;
    }
};
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(float side)
    {
        length = side;
        breadth = side;
    }

    float calArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle rectangle1;
    Rectangle rectangle2(4.5, 5.2);
    Rectangle rectangle3(5.0);

    cout << "Area of Rectangle 1: " << rectangle1.calArea() << endl;
    cout << "Area of Rectangle 2: " << rectangle2.calArea() << endl;
    cout << "Area of Rectangle 3: " << rectangle3.calArea() << endl;

    return 0;
}
