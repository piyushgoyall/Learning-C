// Create a class "Multiply" and overload the binary division operator to perfrom multiplication of two numbers.

#include <bits/stdc++.h>
using namespace std;

class Dominus
{
    double number, result;

public:
    Dominus(double n1) : number(n1) {}

    // Overload the + binary operator
    Dominus operator/(const Dominus &obj)
    {
        result = number * obj.number;
        return result;
    }
    void showResult()
    {
        cout << "Multiplication is: " << result << endl;
    }
};

int main()
{
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Dominus dm1(num1);
    Dominus dm2(num2);
    dm1 / dm2;
    dm1.showResult();
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// class Multiply
// {
//     double number, result;

// public:
//     Multiply(double n1) : number(n1) {}

//     Multiply operator/(const Multiply &obj)
//     {
//         return number * obj.number;
//     }
//     void showResult()
//     {
//         cout << "Multiplication is: " << result << endl;
//     }
// };

// int main()
// {
//     double num1, num2;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;

//     Multiply m1(num1);
//     Multiply m2(num2);
//     m1 / m2;
//     m1.showResult();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Multiply
// {
// private:
//     double value1, value2;

// public:
//     Multiply(double val1, double val2)
//     {
//         value1 = val1;
//         value2 = val2;
//     }

//     Multiply operator / ()
//     {
//         return Multiply(val1 * val2,1);
//     }

//     void display()
//     {
//         cout << val1 * val2 << endl;
//     }
// };

// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     Multiply num(n1, n2);
//     (num / num).display();

//     return 0;
// }