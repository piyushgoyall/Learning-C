#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter the number of rows for matrix A: ";
    cin >> row;
    cout << "Enter the number of columns for matrix A: ";
    cin >> column;

    int a[row][column], b[column][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter value for A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nMatrix A:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout << "\n";
    int res[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            res[i][j] = b[i][column - j - 1];
            cout << res[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
