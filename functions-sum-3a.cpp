#include<stdio.h>
void sum(int a, int b)
{
	int c=a+b;
	printf("%d",c);
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
	sum(a,b);
}
