// // PRIVATE CONSTRUCTOR

// Create a private constructor inside "Number" which accepts an integer number.
// Now display the table of the number passed to this private constructor using private member function "showTable()"

#include <bits/stdc++.h>
using namespace std;
class Number
{
private:
    int num;
    Number(int n)
    {
        num = n;
    }
    void showTable()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << num << " * " << i << " = " << num * i << endl;
        }
    }
    friend class Table;
};
class Table
{
public:
    Table()
    {
        Number t1(5);
        t1.showTable();
    }
};
int main()
{
    Table t;
    return 0;
}