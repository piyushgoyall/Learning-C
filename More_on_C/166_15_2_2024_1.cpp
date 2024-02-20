// Chopsticks
// Given N sticks and an array length where each length[i] represents length of each stick.
// Your task is to make maximum number of pairs of these sticks such that the difference between the length of two sticks is at most D. 
// A stick can't be part of more than one pair of sticks.

//     Input Format:
//         In the function an integer vector length and number D is passed.

//     Output Format:
//         Return an integer representing total number of such pairs.

//     Sample Input:
//     {1, 3, 3, 9, 4},
//     x = 2

//         Sample Output:
//         2

//         Explanation
//         (1st, 3rd) and
//         (2nd, 5th) can be paired together.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    // vector<int> chop(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> chop[i];
    // }

    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
        // temp[i] = chop[i];
    }

    int count = 0;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (temp[j] - temp[i] <= d)
            {
                count++;
                temp[i] = -1;
                temp[j] = -1;
                break;
            }
        }
    }
    cout << count;
    return 0;
}