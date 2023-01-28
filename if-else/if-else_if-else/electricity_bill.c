#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i;
	printf("enter total units");
	scanf("%d",&a);
	if(a>0 && a<=50)
	{
		b=a*0.5;
		f=b + 0.2*b;
		printf("%d",f);
	}
	else if(a>50 && a<=150)
	{
		c=(a-50)*0.75 + 25;
		g=c+ 0.2*c;
		printf("%d",g);
	}
	else if(a>150 && a<=250)
	{
		d= 100+ (a-150)*1.2;
		h=d+0.2*d;
		printf("%d",h);
	}
	else if(a>250)
	{
		e=(a-250)*1.5 +220;
		i=e+0.2*e;
		printf("%d",i);
	}
	else
	{
		printf("invalid");
	}
	 
}
