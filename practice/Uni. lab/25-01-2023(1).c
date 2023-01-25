// Write a program using while loop to print the sum of first n natural numbers.

#include<stdio.h>
int main()
{
    int n;
    printf("ENter the ending value : ");
    scanf("%d",&n);
    int sum = 0,temp=n;

    while(n>0)
    {
        sum = sum+n;
        n--;
    }
    
    printf("Sum of natural numbers till %d : %d",temp,sum);
}