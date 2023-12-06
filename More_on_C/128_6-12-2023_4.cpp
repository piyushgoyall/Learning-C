#include <bits/stdc++.h>
using namespace std;

template <class T>
class Number
{
private:
    T num; // variable of type T
public:
    Number(T n) { num = n; }

    T getNum()
    {
        return num;
    }
};

int main()
{
    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    // create object with char type
    Number<char> numberChar('5');

    cout << "Number (int): " << numberInt.getNum() << endl;
    cout << "Number (double): " << numberDouble.getNum() << endl;
    cout << "Number (char): " << numberChar.getNum() << endl;

    return 0;
}