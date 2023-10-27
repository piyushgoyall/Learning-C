// Indirect Recursion 

#include <bits/stdc++.h>
using namespace std;
void fun_b(int n);
void fun_a(int n)
{
    if (n > 0)
    {
        cout << n << "  ";
        fun_b(n - 1);
    }
}
void fun_b(int n)
{
    if (n > 1)
    {
        cout << n << "  ";
        fun_a(n / 2);
    }
}
int main()
{
    fun_a(10);
    return 0;
}