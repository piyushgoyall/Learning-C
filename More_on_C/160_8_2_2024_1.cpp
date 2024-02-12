// // Find last occurrence

#include <bits/stdc++.h>
using namespace std;

int last(int arr[], int n, int k, int x)
{
    if (x == n)
    {
        return -1;
    }

    int i = last(arr, n, k, x + 1);
    if (i == -1)
    {
        if (arr[x] == k)
        {

            return x;
        }
        else
        {
            return -1;
        }
    }
    return i;
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
    int key;
    cin >> key;
    int x = 0;
    cout << last(arr, n, key, x);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int last(int arr[], int n, int k, int x)
// {
//     if (x == n)
//     {
//         return -1;
//     }

//     int i = last(arr, n, k, x + 1);
//     if (i == -1)
//     {
//         if (arr[x] == k)
//         {
//             return 0;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     else
//     {
//         return i + 1;
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
//     int key;
//     cin >> key;
//     int x = 0;
//     cout << last(arr, n, key, x);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int last(int arr[], int n, int k)
// {
//     if (n == 0)
//     {
//         return -1;
//     }

//     int i = last(arr + 1, n - 1, k);
//     if (i == -1)
//     {
//         if (arr[0] == k)
//         {
//             return 0;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     else
//     {
//         return i + 1;
//     }

//     return -1;
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
//     int key;
//     cin >> key;
//     cout << last(arr, n, key);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int findLastOccurrence(int arr[], int target, int index, int size)
// {
//     if (index < 0)
//     {
//         return -1;
//     }

//     if (arr[index] == target)
//     {
//         return index;
//     }

//     return findLastOccurrence(arr, target, index - 1, size);
// }

// int main()
// {
//     int arr[] = {1,3,1,3,1,3};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int target = 3;
//     int lastOccurrence = findLastOccurrence(arr, target, size - 1, size);

//     if (lastOccurrence != -1)
//     {
//         cout << lastOccurrence << endl;
//     }
//     else
//     {
//         cout << target << "element not found" << endl;
//     }

//     return 0;
// }

// // Find first occurrence of an element

// #include <bits/stdc++.h>
// using namespace std;

// int first(int arr[], int n, int k)
// {
//     if (n == 0)
//     {
//         return -1;
//     }

//     if (arr[0] == k)
//     {
//         return 0;
//     }

//     int i = first(arr + 1, n - 1, k);
//     if (i != -1)
//     {
//         return i + 1;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = { 1, 3, 5, 7, 6, 2 };
//     int key = 7;
//     int n = 6;
//     cout << first(arr, n, key);
//     return 0;
// }

// Find first occurrence

// #include <iostream>
// using namespace std;

// int findFirstOccurrence(int arr[], int target, int index, int size)
// {
//     if (index >= size)
//     {
//         return -1;
//     }

//     if (arr[index] == target)
//     {
//         return index;
//     }

//     return findFirstOccurrence(arr, target, index + 1, size);
// }

// int main()
// {
//     // int arr[] = {2, 5, 8, 2, 9, 10, 6, 2};
//     int size;
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     int target;
//     cin >> target;
//     int firstOccurrence = findFirstOccurrence(arr, target, 0, size);

//     if (firstOccurrence != -1)
//     {
//         cout << "First occurrence of " << target << " is at index: " << firstOccurrence << endl;
//     }
//     else
//     {
//         cout << target << " not found in the array." << endl;
//     }

//     return 0;
// }
