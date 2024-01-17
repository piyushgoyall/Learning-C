// INSERTION SORT (Card Playing Algo)

#include <bits/stdc++.h>
using namespace std;

void insert(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && curr < arr[prev])
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insert(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
