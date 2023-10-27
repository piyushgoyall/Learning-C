#include <bits/stdc++.h>
using namespace std;

void revstr(string str, int index)
{
    if (index == -1)
    {
        return;
    }
    else
    {
        cout << str[index];
        revstr(str, index - 1);
    }
}

int main()
{
    string input;

    cout << "Enter a string: ";
    cin >> input;

    int length = input.length();

    if (length > 0)
    {
        cout << "Reverse of the string: ";
        revstr(input, length - 1);
        cout << endl;
    }
    else
    {
        cout << "String is empty." << endl;
    }
    return 0;
}
