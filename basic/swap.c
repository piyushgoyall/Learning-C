//wrtie a c program to swap 3 numbers using a fourth variable.
//b=a, a=c, c=b

#include<stdio.h>
int main()
{
	int a,b,c,flag;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\n");
	printf("Enter the third number : ");
	scanf("%d",&c);
	printf("\n");
	flag=a;
	a=b;
	b=c;
	c=flag;
	printf("First number : %d",a);
	printf("\n");
	printf("Second number : %d",b);
	printf("\n");
	printf("Third number : %d",c);
	printf("\n");
}
