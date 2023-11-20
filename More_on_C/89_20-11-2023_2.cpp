// PRACTICE CODE: Create a class "myArray" that should create an integer array "arr" holding value [1,2,3,4,5].
// This array should be created by the constructor and memory should be allocated at runtime for this array.
// Also display the array using constructor method.

#include <bits/stdc++.h>
using namespace std;
class myArray
{
    int *arr;

public:
    myArray()
    {
        // allocating memory at run time and initialising
        arr = new int[5]{1, 2, 3, 4, 5};
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    myArray arr1;
    return 0;
}