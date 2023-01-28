#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
	{
		printf("triangle is possible");
	}
	else
	{
		printf("triangle not possible");
	}
}
