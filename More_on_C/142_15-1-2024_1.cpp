// Lower Bound

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    int sz = A.size();
    int l = 0, r = (sz - 1);
    int answer = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (A[mid] > Val)
        {
            r = mid - 1;
        }

        else
        {
            answer = A[mid];
            l = mid + 1;
        }
    }
    return answer;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter sorted array elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int val;
    cout << "Enter val: ";
    cin >> val;

    cout << lowerBound(arr, val) << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int lower_bound(int *arr, int n, int key)
// {
//     int mini = *min_element(arr, arr + n);
//     if (key < mini)
//     {
//         return -1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > key)
//         {
//             return arr[i - 1];
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     cout << "Enter sorted array elements: ";
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int val;
//     cout << "Enter val: ";
//     cin >> val;

//     cout << lower_bound(arr, n, val);
//     return 0;
// }