// Implement a program that creates a dynamic 2D array and finds the maximum element.
// Input: Enter the number of rows: 2
//        Enter the number of columns: 3
//        Enter the elements of the matrix: 3 6 9
//                                          12 26 5
// Ouput: Maximum element: 26

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numRows, numCols;

    // Input the number of rows
    cout << "Enter the number of rows: ";
    cin >> numRows;

    // Input the number of columns
    cout << "Enter the number of columns: ";
    cin >> numCols;

    // Create a dynamic 2D array using double pointers
    int **matrix = new int *[numRows];
    for (int i = 0; i < numRows; ++i)
    {
        matrix[i] = new int[numCols];
    }

    // Input elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j < numCols; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    // Find the maximum element in the matrix
    int maxElement = matrix[0][0];
    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j < numCols; ++j)
        {
            if (matrix[i][j] > maxElement)
            {
                maxElement = matrix[i][j];
            }
        }
    }

    // Display the maximum element
    cout << "Maximum element: " << maxElement << endl;

    // Deallocate memory for the dynamic 2D array
    for (int i = 0; i < numRows; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
