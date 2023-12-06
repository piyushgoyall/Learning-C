// TEMPLATE FUNCTION OVERLOADING

#include <bits/stdc++.h>
using namespace std;

template <typename T>
void myFunc(T x, T y)
{
    cout << "x: " << x << "and"
         << " y: " << y << endl;
}

void myFunc(int w, char z)
{
    cout << "w: " << w << "and"
         << " z: " << z << endl;
}

int main()
{
    // calling myFunc for integers
    myFunc(1, 2);

    // calling myFunc for char
    myFunc('a', 'b');

    // calling myFunc for int and char
    // template function overloading
    myFunc(1, 'b');
    return 0;
}