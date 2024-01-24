// Count alphabets, digits, spaces and tab spaces

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char sentence[100];
    char temp;
    int len = 0;
    int digit = 0, alpha = 0, space = 0;
    while (temp != '\n')
    {
        temp = cin.get();
        // sentence[len++] = temp;
        if (temp >= '0' and temp <= '9')
        {
            digit++;
        }
        else if (isalpha(temp))
        {
            alpha++;
        }
        else if (temp == ' ' or temp == '\t')
        {
            space++;
        }
    }
    cout << "alphabets : " << alpha << endl;
    cout << "spaces : " << space << endl;
    cout << "numbers : " << digit << endl;
    return 0;
}