// Create two classes number and table. Pass the user entered number in Number class constructor and
// print its table through a member function showTable() of class Table?
// Write a C++ code using friend class

#include <bits/stdc++.h>
using namespace std;

class Table;

class Number
{
private:
    int num;

public:
    Number(int n)
    {
        num = n;
    }
    friend class Table;
};

class Table
{
public:
    void showTable(Number num)
    {
        int n = num.num;
        cout << "Table of " << n << ":" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << n << " x " << i << " = " << (n * i) << endl;
        }
    }
};

int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;

    Number numObj(input);
    Table tableObj;
    tableObj.showTable(numObj);

    return 0;
}
