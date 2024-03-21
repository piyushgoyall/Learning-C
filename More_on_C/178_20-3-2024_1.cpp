// Return the first non repeating character of a string and 0 otherwise

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<int> count(26, 0);
    queue<char> ans;

    for (char ch : s)
    {
        int idx = ch - 'a';
        count[idx]++;

        if (count[idx] == 1)
            ans.push(ch);

        else
        {
            while (!ans.empty() && count[ans.front() - 'a'] > 1)
            {
                ans.pop();
            }
        }
    }

    if (!ans.empty())
    {
        cout << ans.front();
    }
    else
        return 0;

    return 0;
}