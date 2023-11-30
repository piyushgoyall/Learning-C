#include <bits/stdc++.h>
using namespace std;
class Discount
{
private:
    float op, dis;

public:
    Discount(float original, float discount)
    {
        op = original;
        dis = discount;
        cout << "\nAfter Discount of " << dis << "% price is: " << op - (op * dis) / 100;
    }
};
int main()
{
    int op, dis;
    cout << "Enter original price and discount percentage: ";
    cin >> op >> dis;
    Discount d1(op, dis);
    return 0;
}