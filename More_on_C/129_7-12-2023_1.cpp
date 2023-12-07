// VECTOR EXAMPLE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // initializing: method 1
    vector<int> vector1 = {1, 2, 3, 4, 5};

    // initializing: method 2
    vector<float> vector2{5.2, 1.25, 82.7, 90.6, 7.4};

    // initializing: method 3
    vector<char> vector3(3, 'c');

    cout << "vector1 = ";
    for (int i : vector1)
    {
        cout << i << " ";
    }

    cout << "\nvector2 = ";
    for (float i : vector2)
    {
        cout << i << " ";
    }

    cout << "\nvector3 = ";
    for (char i : vector3)
    {
        cout << i << " ";
    }
    return 0;
}