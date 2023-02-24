// Write a program to swap two variables using the concept of call by value and call by reference.

#include<stdio.h>

int swap(int a,int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d  %d\n",a,b);
}

int rswap(int *a,int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
    printf("%d  %d",a,b);
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    swap(a,b);
    rswap(&a,&b);
    return 0;
}