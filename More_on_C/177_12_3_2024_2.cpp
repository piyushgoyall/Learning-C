// Consider an array a = [4, 10, 5, 8, 20, 15, 3, 12], for each element output the element after the current element,
// which is just less than the current element and -1 otherwise.

#include <bits/stdc++.h>

using namespace std;

void nse(int a[], int n)
{
    stack<pair<int, int>> s;
    vector<int> result(n, -1);

    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top().first > a[i])
        {
            result[s.top().second] = a[i];
            s.pop();
        }
        s.push({a[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 10, 5, 8, 20, 15, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    nse(arr, n);
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void nse(int a[], int n)
// {
//     stack<int> s;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!s.empty() && s.top() >= a[i])
//         {
//             s.pop();
//         }
//         if (s.empty())
//         {
//             cout << "-1 ";
//         }
//         else
//         {
//             cout << s.top() << " ";
//         }
//         s.push(a[i]);
//     }
// }

// int main()
// {
//     int arr[] = {4, 10, 5, 8, 20, 15, 3, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     nse(arr, n);
//     return 0;
// }
