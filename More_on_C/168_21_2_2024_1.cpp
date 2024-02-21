// Backtracking
// Print all subsequences lexiographically

#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    return a > b;
}

void subset(char input[], char output[], int i, int j, vector<string> &list)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        //     if (output[0] == '\0')
        //     {
        //         cout << "NULL";
        //     }
        //     cout << output << endl;

        string temp(output);
        list.push_back(temp);
        return;
    }
    output[j] = input[i];
    // recursion
    // include
    subset(input, output, i + 1, j + 1, list);
    // exclude
    subset(input, output, i + 1, j, list);
}

int main()
{
    char input[100];
    char output[100];
    vector<string> list;
    cin >> input;

    // Sort the input string
    sort(input, input + strlen(input));

    subset(input, output, 0, 0, list);

    // Sort and print the list
    sort(list.begin(), list.end(), compare);
    for (auto i : list)
        cout << i << endl;
    return 0;
}