// Write a Program to perform addition, subtraction, division and multiplication of two numbers given as input by the user.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Sum = %d \nSubtraction = %d \nMultiplication = %d \nDivision = %d",a+b,a-b,a*b,a/b);
}