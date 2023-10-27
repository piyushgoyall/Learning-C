// Implement a program that creates a dynamic array of integers and calculates their sum.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Create a dynamic array using new
    int *dynamicArray = new int[size];

    // Check if memory allocation was successful
    if (!dynamicArray)
    {
        cerr << "Memory allocation failed!" << endl;
        return 1;
    }

    // Prompt the user to enter integers and add them to the array
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> dynamicArray[i];
    }

    // Calculate the sum of the integers in the array
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += dynamicArray[i];
    }

    // Print the sum
    cout << "Sum of the integers: " << sum << endl;

    // Deallocate the dynamic array
    delete[] dynamicArray;

    return 0;
}
