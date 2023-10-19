// HW: Constructor for addition

#include <bits/stdc++.h>
using namespace std;
class Addition
{
private:
    int n1;
    int n2;
    int c;

public:
    Addition(int a, int b)
    {
        n1 = a;
        n2 = b;
        c = n1 + n2;
    }
    void Display()
    {
        cout << "Sum: " << c << endl;
    }
};
int main()
{
    int x, y;
    cin >> x >> y;
    Addition s1(x, y);
    s1.Display();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Addition
// {
// private:
//     int n1;
//     int n2;

// public:
//     int c;
//     Addition(int a, int b)
//     {
//         n1 = a;
//         n2 = b;
//         c = a + b;
//     }
//     void Display()
//     {
//         cout << "Sum: " << c << endl;
//     }
// };
// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     Addition s1(x, y);
//     s1.Display();
//     return 0;
// }