// A string tells you how much a person has travelled in which direction  like NSNNNEWE this implies the person is moving like north, south then 3 steps north
// and so on. So output the displacement in terms of coordinates from origin.

#include <iostream>
using namespace std;

int main()
{
    string direc;
    cin >> direc;

    int x = 0, y = 0;
    for (char c : direc)
    {
        x += (c == 'N') - (c == 'S');
        y += (c == 'E') - (c == 'W');
    }

    cout << "Final Coordinates: (" << x << ", " << y << ")" << endl;

    while (x > 0)
    {
        cout << "N";
        x--;
    }

    while (y > 0)
    {
        cout << "E";
        y--;
    }

    while (x < 0)
    {
        cout << "S";
        x++;
    }

    while (y < 0)
    {
        cout << "W";
        y++;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string direc;
//     cin >> direc;
//     int x = 0, y = 0;
//     for (int i = 0; i < direc.length(); i++)
//     {
//         if (direc[i] == 'N')
//             x += 1;
//         else if (direc[i] == 'S')
//             x -= 1;
//         else if (direc[i] == 'E')
//             y += 1;
//         else if (direc[i] == 'W')
//             y -= 1;
//     }
//     cout << "Final Coordinates: (" << x << ", " << y << ")";
//     return 0;
// }