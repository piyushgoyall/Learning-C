// Create a double type array with length 4 and store any 4 values in it.
// Ask from user to enter an index number.
// If index is invalid,throw an exception "Error: Array out of bounds!" otherwise, print all the value from array.
// Write this code using exception

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double myArray[4] = {36.56, 456, 346.4, 437.34};

    try
    {
        int index;
        cout << "Enter an index: ";
        cin >> index;

        if (index < 0 || index >= 4)
        {
            throw "Error: Array out of bounds!";
        }

        cout << "Values in the array: ";
        for (int i = 0; i < 4; ++i)
        {
            cout << myArray[i] << " ";
        }
        cout << endl;
    }
    catch (const char *exception)
    {
        cout << exception << endl;
    }

    return 0;
}
