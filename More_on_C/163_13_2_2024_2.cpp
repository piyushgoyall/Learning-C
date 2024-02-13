// I/P = 2021
// O/P = Two Zero Two One

#include <bits/stdc++.h>
using namespace std;

string y[] = {"zero", "one", "two", "four", "five", "six", "seven", "eight", "nine"};

void to_word(int n)
{
    // base
    if (n == 0)
    {
        return;
    }
    int idx = n % 10;
    // recursive
    to_word(n / 10);
    cout << y[idx] << " ";
}

int main()
{
    int num;
    cin >> num;
    to_word(num);
    return 0;
}

// // enum

// #include <stdio.h>
// // enum month
// // {
// //     jan,
// //     feb,
// //     mar,
// //     apr,
// //     may,
// //     jun,
// //     jul,
// //     aug,
// //     sep,
// //     oct,
// //     nov,
// //     dec
// // } m;

// // int main()
// // {
// //     for (int m = jan; m <= dec; m++)
// //         printf("%d\n", m + 1);
// //     return 0;
// // }

// enum day
// {
//     sunday,
//     monday,
//     tuesday,
//     wednesday,
//     thursday,
//     friday,
//     saturday
// };
// enum day today;
// int main()
// {
//     printf("%d\n", today + 6);
//     return 0;
// }