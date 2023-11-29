// CLASS TYPE TO BASIC TYPE

#include <bits/stdc++.h>
using namespace std;

class myClass
{
private:
    int myValue;

public:
    // Constructor
    myClass(int value) : myValue(value) {}

    // Conversion operator
    operator int()
    {
        return myValue;
    }
};

int main()
{
    myClass myObject = 28;

    // Convert myClass to int using the conversion operator
    int intValue = static_cast<int>(myObject);
    cout << "Integer Value: " << intValue << endl;

    // // Convert myClass to int using the conversion operator
    // int intValue = myObject;
    // cout << "Integer Value: " << intValue << endl;
    return 0;
}