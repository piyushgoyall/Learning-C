//wap to find sum of all natural numbers between 1 to n using recursion
#include<stdio.h>
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (n+sum(n-1));
	}
}
int main()
{
	int n;
	printf("Enter the ending value :- " );
	scanf("%d",&n);
	printf("Sum = %d",sum(n));
}
