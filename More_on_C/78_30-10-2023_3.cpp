// // Create two classes length and width with two private menbers(integers) length and width, respectively.
// // You have to pass numbers in the respective classes for length and width through their constructors.
// // Now create a friend function area() to calculate the area of rectangle.

#include <bits/stdc++.h>
using namespace std;

class Width;
class Length
{
private:
    int length;

public:
    Length(int len)
    {
        length = len;
    }

    friend int area(Length &l, Width &w);
};

class Width
{
private:
    int width;

public:
    Width(int wid)
    {
        width = wid;
    }

    friend int area(Length &l, Width &w);
};

int area(Length &l, Width &w)
{
    return l.length * w.width;
}

int main()
{
    Length lengthObj(5);
    Width widthObj(3);

    // int result = area(lengthObj, widthObj);

    cout << "Area of the rectangle: " << area(lengthObj, widthObj) << endl;

    return 0;
}

// #include <iostream>

// using namespace std;

// class Width; // Forward declaration to let Length class know about Width class
// class Length {
// private:
//     int length;

// public:
//     Length(int len) : length(len) {}

//     // Declare the friend function
//     friend int area(const Length& l, const Width& w);
// };

// class Width {
// private:
//     int width;

// public:
//     Width(int wid) : width(wid) {}

//     // Declare the friend function
//     friend int area(const Length& l, const Width& w);
// };

// // Define the friend function to calculate the area
// int area(const Length& l, const Width& w) {
//     return l.length * w.width;
// }

// int main() {
//     // Create objects of Length and Width classes
//     Length lengthObj(5);
//     Width widthObj(3);

//     // Calculate the area using the friend function
//     int result = area(lengthObj, widthObj);

//     cout << "Area of the rectangle: " << result << endl;

//     return 0;
// }
