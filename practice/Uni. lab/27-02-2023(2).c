// C Program to check number is palindrome or not.

#include<stdio.h>
int ispalin(int num)
{
    int temp=num,rem,sum=0;
    while(num>0)
    {
        rem = num%10;
        sum = rem + sum*10;
        num = num/10; 
    }
    // printf("%d",sum);
    if(sum==temp)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    ispalin(num);
    return 0;
}