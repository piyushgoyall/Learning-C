#include <bits/stdc++.h>
using namespace std;
int digit(int num)
{
    int count = 0;
    if (num < 10)
    {
        return 1;
    }
    else
    {
        return 1 + digit(num / 10);
    }
}
int main()
{
    int num;
    cin >> num;
    cout << digit(num);
    return 0;
}