// Print permutations of a string.

#include <bits/stdc++.h>
using namespace std;

void permute(char input[], int i, int n)
{
    // base
    if (i == n)
    {
        cout << input << endl;
        return;
    }

    // rec
    for (int j = i; j < n; j++)
    {
        swap(input[i], input[j]);
        permute(input, i + 1, n);
        swap(input[i], input[j]);
    }
}

int main()
{
    char input[100];
    cin >> input;
    permute(input, 0, 3);
    return 0;
}