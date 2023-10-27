// 18-10-2023_2 Solution
// ADDITION CONSTRUCTOR

#include <bits/stdc++.h>
using namespace std;
class Addition
{
public:
    Addition(float n1, float n2)
    {
        cout << "Sum: " << n1 + n2;
    }
};
int main()
{
    Addition add1(45.5, 3.4);
    return 0;
}