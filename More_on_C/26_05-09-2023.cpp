#include <iostream>
using namespace std;
class Address
{
public:
    string state;
    void initState(string state)
    {
        this->state = state;
    }
};
int main()
{
    Address obj;
    obj.initState("Punjab");
    cout << obj.state;
    return 0;
}