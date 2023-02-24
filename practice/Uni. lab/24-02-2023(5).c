// Write a program to check that the given number is prime, Armstrong or perfect using the concept of functions

#include <stdio.h>
#include<math.h>

int isarm(int num)
{
    int count=0;
    for (int i = num; i != 0; i = i / 10)
    {
        count = count + 1;
    }

    int sum = 0, rem;
    for (int i = num; i != 0; i = i / 10)
    {
        rem = i % 10;
        sum = sum + pow(rem, count);
    }
    printf("Sum = %d\n", sum);
    if (num == sum)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not An Armstrong Number\n");
    }
}

int isprime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("Not A Prime Number\n");
            return 0;
        }
    }
    printf("Prime Number\n");
} 

int isper(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum += i;
        }
    }
    if(sum==num)
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("Not A Perfect Number\n");
    }
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    isarm(num);
    isprime(num);
    isper(num);
    return 0;
}
