// Multiple Inheritence

#include <bits/stdc++.h>
using namespace std;

class Length
{
protected:
    int length;

public:
    Length()
    {
        length = 0; 
    }
    Length(int len)
    {
        length = len;
    }
};

class Breadth
{
protected:
    int breadth;

public:
    Breadth()
    {
        breadth = 0;
    }
    Breadth(int br)
    {
        breadth = br;
    }
};

class Area : public Length, public Breadth
{
public:
    Area(int len, int br) : Length(len), Breadth(br) {}
    Area()
    {
        Length();
        Breadth();
    }

    int calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    int len, br;
    cout << "Enter length: ";
    cin >> len;
    cout << "Enter breadth: ";
    cin >> br;

    Area areaObj(len, br);
    int result = areaObj.calculateArea();

    cout << "Area is: " << result << endl;

    return 0;
}
