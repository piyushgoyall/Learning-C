// Define a FUNCTION TEMPLATE called findmax() to compare two parameters of integer, double and char types?

#include <bits/stdc++.h>
using namespace std;

template <typename T>
T findMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    // Call findMax for int
    cout << findMax(200, 150) << endl;

    // Call findMax for double
    cout << findMax(23.23, 36.42) << endl;

    // Call findMax for char
    cout << findMax('c', 'p') << endl;

    return 0;
}