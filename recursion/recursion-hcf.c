//wap to find hcf of two numbers using recursion
#include<stdio.h>
int hcf(int a, int b)
{
	if(b>a && b%a==0)
	{
		return a;
	}
	else if(a>b && a%b==0)
	{
		return b;
	}
	else if(a==b)
	{
		return a;
	}
	else if(a>b && a%b != 0)
	{
		return hcf(a,a%b);
	}
	else if(b>a && b%a != 0)
	{
		return hcf(b,b%a);
	}
	else 
	{
		return 1;
	}
}
int main()
{
	int a,b;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\n");
	printf("HCF = %d",hcf(a,b));
}
