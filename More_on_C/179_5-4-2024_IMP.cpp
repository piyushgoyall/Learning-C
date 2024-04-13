// Binary bit permutation
// Generate a string like if input is 1 return binary 0, if input is 2 return 0, 1, if input is 3 return 0, 1 and 00, if input is 4 return 0, 1, 00, 01.
// Tell which data structure should be most suitable for this c++

// #include<bits/stdc++/h>
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    queue<string> s;
    // cout << "0 ";
    s.push("0");
    s.push("1");

    while (n--)
    {
        string ans = s.front();
        cout << ans << " ";
        s.pop();
        string s1 = ans + '0';
        string s2 = ans + '1';

        s.push(s1);
        s.push(s2);
    }

    // if (n == 1)
    // {
    //     return 0;
    // }

    // queue<string> s;
    // cout << "0 ";
    // s.push("1");

    // while (n > 1)
    // {
    //     string ans = s.front();
    //     s.pop();
    //     cout << ans << " ";
    //     n--;

    //     string s1 = ans + "0";
    //     string s2 = ans + "1";

    //     s.push(s1);
    //     s.push(s2);
    // }

    return 0;
}