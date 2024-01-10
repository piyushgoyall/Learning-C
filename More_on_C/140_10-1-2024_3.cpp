// Using Linear Search Return All The Occurences Of An Element

#include <bits/stdc++.h>
using namespace std;

void linearSearch(int *arr, int n, int x)
{
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i << " ";
            check += 1;
        }
    }
    if (check == 0)
    {
        cout << "Not Present" << endl;
    }
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
    linearSearch(arr, n, x);
    return 0;
}

// // Using Linear Search Return All The Occurences Of An Element

// #include <bits/stdc++.h>
// using namespace std;

// string linearSearch(int *arr, int n, int x)
// {
//     string s = "";
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             s = s + to_string(i);
//         }
//     }
//     return s;
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
//     string s = linearSearch(arr, n, x);
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s[i] << " ";
//     }
//     return 0;
// }
