// Write a C++ program that implements a recursive function, int bits(int n),
// to calculate and output the number of valid binary strings of length n with no consecutive 1s.

#include <iostream>
using namespace std;

// Function to calculate the number of valid binary strings
int bits(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 2; // "0" and "1"
    if (n == 2)
        return 3; // "00", "01", "10"

    // For length n > 2, the valid strings are either ending with "0" or "01"
    // So, we add the results of lengths (n-1) and (n-2)
    return bits(n - 1) + bits(n - 2);
}

int main()
{
    int n;
    cout << "Enter the length of the binary string: ";
    cin >> n;
    cout << "Number of valid binary strings of length " << n << " with no consecutive 1s: " << bits(n) << endl;
    return 0;
}