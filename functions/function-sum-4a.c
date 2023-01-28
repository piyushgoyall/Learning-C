#include<stdio.h>
int sum(int a, int b)
{
	int c=a+b;
	return c;
}
int main()
{
	int a,b;
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the value of b :- ");
	scanf("%d",&b);
	printf("\n");
	int d= sum(a,b);
	printf("Sum = %d",d);
}
