#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a ");
	scanf(" %d",&a);
	printf("enter the value of b ");
	scanf(" %d",&b);
	c=a>b;
	switch(c)
	{
		case 1:
			printf(" %d",a);
			break;
		case 0:
			printf(" %d",b);
			break;
		default:
			printf("invalid");
	}
}
