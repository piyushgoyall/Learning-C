//wap to find maximum number using function
#include<stdio.h>
int max(int a, int b, int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
int main()
{
	int a,b,c;
	printf("Enter the first number :- ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the second number :- ");
	scanf("%d",&b);
	printf("\n");
	printf("Enter the third number :- ");
	scanf("%d",&c);
	printf("\n");
	int d = max(a,b,c);
	printf("Maximum number = %d",d);
}
