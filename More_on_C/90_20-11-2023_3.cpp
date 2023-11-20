// MAKING SOME CHANGES IN THE PREVIOUS FILE
// CREATING OBJECTS DYNAMICALLY

#include <bits/stdc++.h>
using namespace std;
class myArray
{
    int *arr;

public:
    myArray()
    {
        // allocating memory at run time and initializing.
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
    int num_objects;
    cout << "How many objects you want to create: ";
    cin >> num_objects;

    // Creating objects and allocating memory at run time.
    myArray *arrobj = new myArray[num_objects];
    return 0;
}