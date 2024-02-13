// Power of a number using recursion

#include <bits/stdc++.h>
using namespace std;

int raise(int num, int p)
{
    if (num == 0)
        return 1;
    int x = raise(num, p / 2);
    int sq = x * x;
    if (p & 1)
    {
        return num * sq;
    }
    return sq;
}

int main()
{
    int num, pow;
    cin >> num >> pow;
    cout << raise(num, pow);
    return 0;
}

// TIME COMPLEXITY IS O(n)

// #include <bits/stdc++.h>
// using namespace std;

// int raise(int num, int pow)
// {
//     if (pow == 0)
//         return 1;
//     return num * raise(num, pow - 1);
// }

// int main()
// {
//     int num, pow;
//     cin >> num >> pow;
//     cout << raise(num, pow);
//     return 0;
// }