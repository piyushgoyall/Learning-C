// Strings

#include <iostream>
using namespace std;

int main()
{
    // char a[] = {'a','b','c','d','e','f','\0'};
    char a[] = "abcdef";
    cout << a << endl;

    char b[100];
    char c;
    int i = 0;

    while ((c = cin.get()) != '\n' && i < 99)
    {
        b[i++] = c;
    }
    b[i] = '\0';

    cout << b << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // char a[] = {'a','b','c','d','e','f','\0'}
//     char a[] = "abcdef";
//     cout << a << endl;
//     char b[100];
//     char c;
//     c = cin.get<<b;
//     cout << b << endl;
//     return 0;
// }