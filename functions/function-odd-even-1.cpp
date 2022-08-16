#include<stdio.h>
int even(int n)
{
	if(n%2==0)
	{
	return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n; 
	printf("Enter number : ");
	scanf("%d",&n);
	if(even(n)==1)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
