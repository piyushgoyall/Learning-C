#include<stdio.h>
int print(int a,int b)
{
	int static i =1;
	int static p = 1;
	if(i<=b)
	{
		i = i+1;
		p = p*a;
		print(a,b);
	}
	else
	{
		printf("%d",p);
	}
}
int main()
{
	int a,b;
	printf("Enter the number :- ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the power :- ");
	scanf("%d",&b);
	printf("\n");
	print(a,b);
}
