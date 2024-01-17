// Inbuilt Sort Function

#include <bits/stdc++.h>
using namespace std;

// bool compare(int a, int b)
// {
//     return a > b;
// }

int main()
{
    int arr[] = {5, 4, 3, 2, 1, -12, 7, -18, -1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort(arr, arr + n, compare);
    sort(arr, arr + n);
    reverse(arr,arr+n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}