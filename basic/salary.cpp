#include<stdio.h>
int main()
{
	int bs,gs,a,b,c;
	printf("Enter basic salary : ");
	scanf("%d",&bs);
	printf("\n");
	printf("Gross salary : ");
	if(bs>=10000 && bs<20000)
	{
		a=bs+(bs/5)+((bs*4)/5);
		printf("%d",a);
	}
	else if(bs>=20000 && bs<30000)
	{
		b=bs+(bs/4)+((bs*9)/10);
		printf("%d",b);
	}
	else if (bs>=30000)
	{
		c=bs+((3*bs)/10)+((95*bs)/100);
		printf("%d",c);
	}
	else
	{
		printf("invalid");
	}
}
