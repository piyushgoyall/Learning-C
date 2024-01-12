// MAX SUBARRAY SUM

// KADANE'S ALGORITHM

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    
    cout << maxsum << endl;
    return 0;
}


// // // CUMULATIVE SUM APPROACH / PREFIX SUM APPROACH

// #include <bits/stdc++.h>
// using namespace std;

// void maxSubarraySum(int *arr, int n)
// {
//     int pref[100] = {0};
//     pref[0] = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         pref[i] = arr[i] + pref[i - 1];
//     }

//     int ls = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i+1; j < n; j++)
//         {
//             sum = (i > 0) ? (pref[j] - pref[i - 1]) : (pref[j]);
//             ls = max(ls, sum);
//         }
//     }
//     cout << ls;
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

//     maxSubarraySum(arr, n);
//     return 0;
// }

// // // MAX SUM OF SUBARRAY

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }
// //     int maxSum = INT_MIN;
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = i; j < n; j++)
// //         {
// //             int sum = 0;
// //             for (int k = i; k <= j; k++)
// //             {
// //                 sum += arr[k];
// //                 // cout << arr[k] << " ";
// //             }
// //             maxSum = max(maxSum, sum);
// //         }
// //     }
// //     cout << maxSum << endl;
// //     return 0;
// // }

// // // PRINT SUBARRAY

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = i; j < n; j++)
// //         {
// //             for (int k = i; k <= j; k++)
// //             {
// //                 cout << arr[k] << " ";
// //             }
// //             cout << endl;
// //         }
// //     }
// //     return 0;
// // }