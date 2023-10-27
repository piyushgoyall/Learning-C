// Create a class Table to print the table of a number passed as a constructor parameter.
// At the end display total number of objects created of that class. Write this code using static.

#include <bits/stdc++.h>
using namespace std;

class Table
{
private:
    int number;
    static int objectCount;

public:
    Table(int num)
    {
        number = num;
        objectCount++;
        printTable();
    }

    void printTable()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << number << " x " << i << " = " << (number * i) << endl;
        }
    }

    static int getObjectCount()
    {
        return objectCount;
    }
};

int Table::objectCount = 0;

int main()
{
    Table table1(5);
    Table table2(8);

    cout << "Objects created: " << Table::getObjectCount() << endl;

    return 0;
}
