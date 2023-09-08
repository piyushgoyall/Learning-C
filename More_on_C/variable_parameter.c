/*Write a program that demonstrates the use of a variable number of parameters in a function.
Implement a function calculateAverage that takes a variable number of integers as input and calculates their average.
The program should read a set of integers from the user, call the calculate Average function with the input integers, and print the calculated average.*/

#include <stdio.h>
#include <stdarg.h>

double calculateAverage(int count, ...)
{
    va_list args;
    double total = 0;

    // Initialize the va_list with the variable arguments
    va_start(args, count);

    // Loop through the variable arguments
    for (int i = 0; i < count; i++)
    {
        int num = va_arg(args, int); // Get the next argument of type int
        total += num;
    }

    // Clean up the va_list
    va_end(args);

    // Calculate and return the average
    return total / count;
}

int main()
{
    int n; // Number of values to average
    printf("Enter the number of values to average: ");
    scanf("%d", &n);

    // Ensure n is positive
    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; // Return an error code
    }

    int values[n]; // Array to store the values

    printf("Enter %d integer values separated by spaces:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &values[i]);
    }

    double result = calculateAverage(n, values[0], values[1], values[2], values[3], values[4]);

    printf("Average: %.2lf\n", result);

    return 0;
}
