#include <bits/stdc++.h>
using namespace std;
class Table
{
public:
    Table(float n)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    Table t1(n);
    return 0;
}