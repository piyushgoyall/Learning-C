// Array

#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    // int n = sizeof(arr) / sizeof(int);
    cout << "\nInside the function: " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 5, 2, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Inside the main: " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    printArray(arr, n);

    return 0;
}