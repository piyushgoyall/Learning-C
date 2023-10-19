#include <bits/stdc++.h>
using namespace std;
class Discount
{
public:
    Discount(float n)
    {
        cout << "Original Price: 658" << endl;
        cout << "After Discount of " << n << " price is: " << 658 - (658 * n) / 100;
    }
};
int main()
{
    Discount d1(5);
    return 0;
}