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
    Table t1(5);
    return 0;
}