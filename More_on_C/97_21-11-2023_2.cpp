// For Double Input. 

#include <bits/stdc++.h>
using namespace std;

class Dominus
{
    double number, result;

public:
    Dominus(double n1) : number(n1) {}

    // Overload the + binary operator
    Dominus operator+(const Dominus &obj)
    {
        result = number - obj.number;
    }
    void showResult()
    {
        cout << "Subtraction is: " << result << endl;
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
    dm1 + dm2;
    dm1.showResult();
    return 0;
}
