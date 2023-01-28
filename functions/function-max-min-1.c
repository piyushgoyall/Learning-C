//wap to find max number between two numbers using functions
#include<stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
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
	printf("Max = %d\n\n",max(a,b));
	printf("Min = %d",min(a,b));
}

