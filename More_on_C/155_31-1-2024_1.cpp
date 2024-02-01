// Convert a binary string to an integer string.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string bin;
    cin >> bin;

    int sum = 0;
    for (int i = bin.length() - 1; i >= 0; i--)
    {
        if (bin[i] == '1')
        {
            sum = sum + pow(2, bin.length() - i - 1);
        }
        cout << sum << "  " << bin[i] << endl;
    }
    // cout << "Decimal for " << bin << " is : " << sum << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string bin;
//     cin >> bin;

//     int sum = 0;
//     int n = bin.length();
//     for (int i = 0; i < n; i++)
//     {
//         if (bin[n - i - 1] == '1')
//         {
//             sum = sum + pow(2, i);
//         }
//     }
//     cout<<"Decimal for "<<bin<<" is : " << sum << endl;
//     return 0;
// }