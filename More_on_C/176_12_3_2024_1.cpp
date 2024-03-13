// Consider an array a = [4, 10, 5, 8, 20, 15, 3, 12], for each element output the element before the current element,
// which is just less than the current element and -1 otherwise.

#include <bits/stdc++.h>
using namespace std;

void pse(int a[], int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() >= a[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            cout << "-1 ";
        }
        else
        {
            cout << s.top() << " ";
        }
        s.push(a[i]);
    }
}

int main()
{
    int arr[] = {4, 10, 5, 8, 20, 15, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    pse(arr, n);
    return 0;
}
