// CONSTRUCTOR OVERLOADING

// IN LINE 38 INSTEAD OF USING "f" WE CAN USE DOUBLE IN LINE 11 AND LINE 26.

#include <iostream>
using namespace std;

class Product
{
private:
    float num1, num2;

public:
    Product()
    {
        cout << "Empty!!" << endl;
    }

    Product(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
        cout << "Integer Product: " << num1 * num2 << endl;
    }

    Product(float n1, float n2)
    {
        num1 = n1;
        num2 = n2;
        cout << "Float Product: " << num1 * num2 << endl;
    }
};

int main()
{
    Product pro1;
    Product pro2(123, 32);
    Product pro3(324.23f, 5.5f);
    return 0;
}
