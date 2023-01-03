#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
    	char t;
	printf("enter the input like 12+15 then press enter : ");
	scanf("%d%c%d",&a,&t,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	switch(t)
	{
    		case '+':
		printf("%d",c);
		break;
		case '-':
		printf("%d",d);
		break;
		case '*':
		printf("%d",e);
		break;
		case '/':
		printf("%d",f);
		break;
	}
}
