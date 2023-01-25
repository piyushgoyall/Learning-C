// Write a program to check a number is Armstrong or not using for loop.

#include <stdio.h>
#include <math.h>
int main()
{
    int num, count = 0, rem, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = num; i > 0; i = i / 10)
    {
        count = count + 1;
    }
    for (int i = num; i > 0; i = i / 10)
    {
        rem = i % 10;
        sum = sum + pow(rem, count);
    }
    if (num == sum)
    {
        printf("ARMSTRONG NUMBER");
    }
    else
    {
        printf("NOT AN ARMSTRONG NUMBER");
    }
}