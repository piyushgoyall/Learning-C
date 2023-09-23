// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int r, c;
//     cin >> r >> c;
//     int td[r][c];
    
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin >> td[i][j];
//         }
//     }
//     int search;
//     cout << "Search element: ";
//     cin >> search;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (td[i][j] == search)
//             {
//                 cout << i << "  " << j;
//                 return 0;
//             }
//         }
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int td[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> td[i][j];
        }
    }

    int search;
    cout << "Search element: ";
    cin >> search;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (td[i][j] == search) {
                cout << "Element found at position: " << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
