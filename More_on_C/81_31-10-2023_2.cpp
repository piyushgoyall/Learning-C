// Create a class called rectangle with private member variables length and width. Implement a constant member function
// called calculateArea(). that calculates and returns the area of the rectangle. You have to call this constant function
// using a constant object

#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    int calculateArea() const
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect(5, 3);
    const Rectangle constRect(4, 2);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;
    cout << "Area of the constant rectangle: " << constRect.calculateArea() << endl;

    return 0;
}
