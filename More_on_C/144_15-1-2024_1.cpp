// BUBBLE SORT

#include <bits/stdc++.h>
using namespace std;

void bubble(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        // Flag to check if any swaps are made in the current pass
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps are made in a pass, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 2, -3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
