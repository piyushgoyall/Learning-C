//wap to find sum of the digits of a given number using recursion 
#include<stdio.h>
int digit(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (n%10+digit(n/10));
	}
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("\n");
	printf("Sum = %d",digit(n));
}
