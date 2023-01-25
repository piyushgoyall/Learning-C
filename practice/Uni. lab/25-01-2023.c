// Write the program to count the digits in a number and then print the reverse of the number also.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int count =0;
    for(int i=num;i>0;i=i/10)
    {
        count += 1;
    }
    printf("Count of digits : %d\n",count);
    int rem,sum=0;
    for(int i=num;i>0;i=i/10)
    {
        rem = i%10;
        sum = sum*10+rem;
    }
    printf("Reverse of number : %d",sum);

}