// Global variable.

#include<stdio.h>
int sum;
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("Value of a : %d\nValue of b : %d\nSum = %d",a,b,sum);
    return 0;
}