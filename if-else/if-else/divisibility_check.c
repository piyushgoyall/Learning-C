#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a%5 == 0 && a%11 == 0)
	{
		printf("%d is divisible by 5 & 11",a);
	}
	else
	{
		printf("%d is not divisible by 5 & 11",a);
	}
}

