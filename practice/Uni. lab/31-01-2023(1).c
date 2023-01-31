// WAP to input 10 numbers and print their sum.

#include<stdio.h>
int main()
{
    int n,sum=0;
    for(int i=1;i<=10;i++)
    {
        printf("Enter number %d : ",i);
        scanf("%d",&n);
        sum = sum+n;
    }
    printf("\nSum of numbers = %d",sum);
}

