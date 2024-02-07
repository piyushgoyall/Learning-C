// Create a function to check if array is sorted using recursion.

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    // int i = 0;
    // bool isSort = true;

// base case
    if (n == 0 || n == 1)
    {
        return true;
    }

// recursive call
    if (arr[0] < arr[1] && isSorted(arr + 1, n - 1))
        return true;

    // while (i < n)
    // {
    //     if (arr[i] < arr[i + 1])
    //     {
    //         isSorted(*arr, n - 1)
    //             i = i + 1;
    //     }
    //     else
    //     {
    //         bool = false;
    //         break;
    //     }
    // }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << isSorted(arr, n);
    return 0;
}