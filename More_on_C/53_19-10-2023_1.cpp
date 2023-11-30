// 18-10-2023_2 Solution
// ADDITION CONSTRUCTOR

#include <bits/stdc++.h>
using namespace std;
class Addition
{
public:
    Addition()
    {
        cout << "Sum : 0" << endl;
    }
    Addition(float n1, float n2)
    {
        cout << "Sum : " << n1 + n2;
    }
};
int main()
{
    Addition add2;

    Addition add1(45.5, 3.4);

    float n1, n2;
    cout << "\nEnter two numbers: ";
    cin >> n1 >> n2;
    Addition add3(n1, n2);
    return 0;
}