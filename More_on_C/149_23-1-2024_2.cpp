// Sorting with Comparator
// Given an integer vector and a bool variable flag, your task is to sort the vector in accordance to the
// boolean value. If the bool value passed is true then sort it in non-decreasing order or vice versa

// You can use any sorting technique of your choice

// Input Format: In the function an integer vector and a boolean is passed
// Output Format: Return an integer vector
// Sample Input: [111,33,5,7,29], flag = 1
// Sample Output: [5, 7, 29, 33, 111]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int flag;
    cout << "Enter flag value : ";
    cin >> flag;

    sort(arr, arr + n);
    if (flag == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}