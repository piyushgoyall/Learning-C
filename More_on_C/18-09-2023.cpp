#include <bits/stdc++.h>
using namespace std;
// Function to find the maximum of two integers in an array
int findMax(int arr[], int size)
{
    if (size < 2)
    {
        return -1;
    }
    int maxPro = arr[0] * arr[1];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] * arr[j] > maxPro)
            {
                maxPro = arr[i] * arr[j];
            }
        }
    }
    return maxPro;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxPro = findMax(arr, size);
    cout << "Maximum Product: " << maxPro << endl;
    return 0;
}