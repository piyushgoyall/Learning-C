#include <bits/stdc++.h>
using namespace std;
int raise(int num1, int num2)
{
    if (num2 == 0)
    {
        return 1;
    }
    else
        return num1 * raise(num1, num2 - 1);
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << raise(num1, num2);
    return 0;
}
