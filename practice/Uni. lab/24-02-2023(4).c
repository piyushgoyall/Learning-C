// Write a program in C to find the sum of digits of a number using recursion.

#include<stdio.h>
int sum(int num)
{
    static int s;
    if(num>0)
    {
        s += num%10;
        sum(num/10);
    }
    return s;
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Sum of digits of number : %d",sum(num));   
    return 0;
}