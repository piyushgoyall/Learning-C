// N - Queen Problem
#include <bits/stdc++.h>
using namespace std;

bool check(int board[][20], int n, int i, int j)
{
    // check column
    for (int k = 0; k < i; k++)
    {
        if (board[k][j] == 1)
        {
            return false;
        }
    }

    // check left diagonal
    int x = i;
    int y = j;
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    // check right diagonal
    x = i;
    y = j;
    while (x >= 0 && y < n)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }
    return true;
}

void print(int board[][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool nQueen(int board[][20], int n, int i)
{
    // base
    if (i == n)
    {
        print(board, n);
        return true;
    }

    for (int j = 0; j < n; j++)
    {
        // to check if i and j is safe
        if (check(board, n, i, j))
        {
            board[i][j] = 1;
            bool success = nQueen(board, n, i + 1);
            if (success)
            {
                return true;
            }
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int board[20][20]={0};
    int n;
    cin >> n;
    nQueen(board, n, 0);
    return 0;
}