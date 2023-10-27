#include <bits/stdc++.h>
using namespace std;

class Table
{
private:
    int number;

public:
    Table(int num)
    {
        number = num;
        printTable();
    }

    void printTable()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << number << " x " << i << " = " << (number * i) << endl;
        }
    }
};

int main()
{
    int totalTables;
    cout << "Enter the number of tables you want to create: ";
    cin >> totalTables;

    for (int i = 0; i < totalTables; i++)
    {
        int num;
        cout << "Enter number for table number " << (i + 1) << ": ";
        cin >> num;

        Table table(num);
    }

    return 0;
}
