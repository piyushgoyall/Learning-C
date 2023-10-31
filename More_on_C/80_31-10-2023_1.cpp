// CONSTANT  MEMBER FUNCTION

#include <bits/stdc++.h>
using namespace std;
class Myclass
{
public:
    int A = 100;
    void normalFunc()
    {
        cout << "Can not be accessed by constant object" << endl;
    }
    void fun() const
    {
        // A=A+50;
        cout << "Value of A: " << A + 50 << endl;
    }
};
int main()
{
    const Myclass obj;
    obj.fun();
    // obj.normalFunc();
    return 0;
}