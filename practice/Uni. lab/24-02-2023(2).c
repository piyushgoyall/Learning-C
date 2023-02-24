// Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include <stdio.h>
int sum(int n)
{
    static int s;
    if (n >= 1)
    {
        s = s + n;
        sum(n - 1);
    }
    return s;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Sum : %d", sum(n));
    return 0;
}