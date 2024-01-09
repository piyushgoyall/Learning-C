// Linear Search

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
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
    int x;
    cout << "Enter element to be searched: ";
    cin >> x;
    cout << linearSearch(arr, n, x);
    return 0;
}

// // Linear Search

// #include <bits/stdc++.h>
// using namespace std;

// int linearSearch(int *arr, int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != x)
//         {
//             return -1;
//         }
//         else
//         {
//             return 1;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x;
//     cout << "Enter element to be searched: ";
//     cin >> x;
//     int p = linearSearch(arr, n, x);
//     if (p == -1)
//     {
//         cout << "Not Found";
//     }
//     else if (p == 1)
//     {
//         cout << "Found";
//     }
//     return 0;
// }