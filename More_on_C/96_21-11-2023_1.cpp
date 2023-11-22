// 0.16 (Operator overloading)
// Create a class with operator function to negate the entered value with the help of - operator as prefix.
// #1 Example:
//         -7 = 7
//         5 = -5
//         -3.56 = 3.56
//         12.3 = -12.3

#include <bits/stdc++.h>
using namespace std;

class Multiply
{
private:
    double value;

public:
    Multiply(double val)
    {
        value = val;
    }

    Multiply operator-()
    {
        return Multiply(-value);
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Multiply num1(-7);
    Multiply num2(5);
    Multiply num3(-3.56);
    Multiply num4(12.3);

    (-num1).display();
    (-num2).display();
    (-num3).display();
    (-num4).display();

    int n;
    cin >> n;

    Multiply num(n);
    (-num).display();

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Count
// {
// private:
//     double value;

// public:
//     // Constructor to initialize value
//     Count(double n) { value = n; }
//     // Operator function for - when used as prefix
//     Count operator-()
//     {
//         if (value == 0)
//         {
//             value = value;
//         }
//         else
//         {
//             value = -value;
//         }
//     }
//     void Display()
//     {
//         cout << "Count: " << value << endl;
//     }
// };
// int main()
// {
//     double num;
//     cout << "Enter any number: ";
//     cin >> num;
//     Count neg(num);
//     -neg; // Negates the value
//     neg.Display();
//     return 0;
// }
