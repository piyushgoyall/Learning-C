// Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
int count(int num)
{
    static int c;
    if(num>0)
    {
        c +=1;
        count(num/10);
    }
    return c;
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Number of digits in numbers : %d",count(num));
    return 0;
}