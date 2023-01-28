#include<stdio.h>
int piyushsum()
{
	int a,b,c;
	printf("Enter the value  of a :- ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the value  of b :- ");
	scanf("%d",&b);
	printf("\n");
	c=a+b;
	return c;
}
int main()
{
	int d= piyushsum();
	printf("Sum = %d",d);
}
