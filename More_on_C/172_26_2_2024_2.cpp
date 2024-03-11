// #include <bits/stdc++.h>
// using namespace std;

// int numberOfWays(int n)
// {
//     vector<vector<int>> dp(n, vector<int>(n, 0));

//     // There is only one way to reach any cell in the first row or first column
//     // which is to keep moving right or down respectively.
//     for (int i = 0; i < n; i++)
//     {
//         dp[i][0] = 1;
//         dp[0][i] = 1;
//     }

//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             // Number of ways to reach cell (i, j) is the sum of number of ways to
//             // reach cell (i-1, j) and cell (i, j-1)
//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//         }
//     }

//     // Return number of ways to reach the last cell
//     return dp[n - 1][n - 1];
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the board: ";
//     cin >> n;
//     cout << "Number of ways to reach the last cell from the first cell is " << numberOfWays(n) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int ways(int n)
{
    int i,j,;
    if(i==n-1 && j==n-1)
    {
        return count;
    }
}

int main()
{
    int n;
    cin>>n;
    ways(n);
    return 0;
}