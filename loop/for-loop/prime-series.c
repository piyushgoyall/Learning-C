// Print prime numbers between two numbers.

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter starting and ending value : ");
    scanf("%d %d",&num1,&num2);
    int i,j;
    for(i=num1;i<=num2;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d\n",i);
        }
    }
}