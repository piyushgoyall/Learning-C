// Find all occurrences of an element in an array using recursion.

#include <iostream>
#include <vector>
using namespace std;

void findAll(int arr[], int n, int k, int x, vector<int> &index)
{
    if (x == n)
    {
        return;
    }

    if (arr[x] == k)
    {
        index.push_back(x);
    }

    findAll(arr, n, k, x + 1, index);
    return;
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

    vector<int> allId;
    findAll(arr, n, key, x, allId);

    if (allId.empty())
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found at: ";
        for (int i : allId)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// void findAll(int arr[], int n, int k, int x, vector<int> &index)
// {
//     if (x == n)
//     {
//         return;
//     }

//     if (arr[x] == k)
//     {
//         index.push_back(x);
//     }

//     findAll(arr, n, k, x + 1, index);
//     return;
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

//     vector<int> allId;
//     findAll(arr, n, key, x, allId);

//     if (allId.empty())
//     {
//         cout << "Element not found." << endl;
//     }
//     else
//     {
//         cout << "Element found at: ";
//         for (int i : allId)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
