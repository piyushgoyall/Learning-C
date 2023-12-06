// FUNCTION TEMPLATES

#include <bits/stdc++.h>
using namespace std;

template <typename T>
T add(T num1, T num2)
{
    return (num1 + num2);
}

int main()
{
    int result1;
    double result2;

    // calling with int parameters
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // calling with double parameters
    result2 = add<double>(243.4, 25.24);
    cout << "243.4 + 25.24 = " << result2 << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// template <typename T>
// T add(T num1, T num2)
// {
//     cout << "Sum is: " << num1 + num2 << endl;
// }

// int main()
// {
//     // calling with int parameters
//     add(2, 3);

//     // calling with double parameters
//     add(243.4, 25.24);
//     return 0;
// }