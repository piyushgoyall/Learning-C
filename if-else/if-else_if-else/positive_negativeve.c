#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is a positive number",a);
	}
	else if(a<0)
	{
		printf("%d is a negative number",a);
	}
	else
	{
		printf("%d is zero",a);
	}
}
