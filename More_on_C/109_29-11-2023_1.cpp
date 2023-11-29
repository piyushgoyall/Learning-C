// TYPE CONVERSION
// BASIC TYPE TO CLASS TYPE

#include <bits/stdc++.h>
using namespace std;

class myClass
{
private:
    int Integer;

public:
    // Constructor that takes an int parameter
    myClass(int value) : Integer(value)
    {
    }

    // Member function
    void display()
    {
        cout << "Value in myClass: " << Integer << endl;
    }
};

int main()
{
    int Integer = 28;
    // Conversion using constructor
    myClass myObject = Integer;
    myObject.display();
    return 0;
}