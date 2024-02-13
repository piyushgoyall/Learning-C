// Given a "4 x n" floor and tiles of size "4 x 1", count the number of ways to tile the given floor using these tiles.

#include <bits/stdc++.h>
using namespace std;

int tiles(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1 || n == 2 || n == 3)
        return 1;

    if (n == 4)
        return 2;

    return tiles(n - 1) + tiles(n - 4);
}

int main()
{
    int n;
    cin >> n;
    cout << tiles(n) << endl;
    return 0;
}