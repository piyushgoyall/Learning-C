// EXCEPTIONAL HANDLING

#include <bits/stdc++.h>
using namespace std;

int Division(int x, int y)
{
    string err = "Division by zero!!";
    if (y == 0)
    {
        throw err;
    }
    return int(x / y);
}

int main()
{
    int x = 70;
    int y = 0;
    int result;
    try
    {
        result = Division(x, y);
        cout << "Result is: " << result << endl;
    }
    catch (const char *err)
    {
        cout << err << endl;
    }
    return 0;
}