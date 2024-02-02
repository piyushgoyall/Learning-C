// Spiral Print 2D array

#include <iostream>
using namespace std;

void spiralPrint(int rows, int cols, int arr[][100])
{
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right)
    {
        // Print top row
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        // Print bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Print left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Spiral order: ";
    spiralPrint(rows, cols, arr);

    return 0;
}
