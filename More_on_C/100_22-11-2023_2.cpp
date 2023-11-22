// OPERATOR OVERLOADING (Binary Operators Using Friend Funtion)
// In this approach-
//                  * Overloading function must be preceded with 'friend' keyword.
//                  * Friend function decleration should be within class scope.

#include <bits/stdc++.h>
using namespace std;
class Distance
{
public:
    int km, mt;
    Distance()
    {
        km = 0;
        mt = 0;
    }
    Distance(int k, int m)
    {
        km = k;
        mt = m;
    }
    friend Distance operator+(Distance &, Distance &);
};

Distance operator+(Distance &d1, Distance &d2)
{
    // Create an object to return
    Distance d3;
    d3.km = d1.km + d2.km;
    d3.mt = d1.mt + d2.mt;

    // Return the resulting object
    return d3;
}

int main()
{
    Distance d1(10, 200);
    Distance d2(12, 250);
    Distance d3;

    // Use overloaded operator
    d3 = d1 + d2;
    cout << "\nTotal km & meters: " << d3.km << " | " << d3.mt;
    return 0;
}