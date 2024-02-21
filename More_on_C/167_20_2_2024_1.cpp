// Backtracking
// Print all subsequences

#include <bits/stdc++.h>
using namespace std;

void subset(char input[], char output[], int i, int j)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        if (output[0] == '\0')
        {
            cout << "NULL";
        }
        cout << output << endl;
        return;
    }
    output[j] = input[i];
    // recursion
    // include
    subset(input, output, i + 1, j + 1);
    // exclude
    subset(input, output, i + 1, j);
}

int main()
{
    char input[100];
    char output[100];
    cin >> input;
    subset(input, output, 0, 0);
    return 0;
}