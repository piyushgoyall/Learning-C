#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i;
	printf("enter the value of a");
	scanf("%d",&a);
    	if(a>=2000)
    	{
    		b=a/2000;
    		a=a%2000;
    		printf("2000 - %d\n",b);
    	}
    	if(a>=500)
    	{
    		c=a/500;
    		a=a%500;
    		printf("500 - %d\n",c);
    	}
    	if(a>=200)
    	{
    		d=a/200;
    		a=a%200;
    		printf("200 - %d\n",d);
	}
	if(a>=100)
    	{
    		e=a/100;
    		a=a%100;
    		printf("100 - %d\n",e);
	}
	if(a>=50)
    	{
    		f=a/50;
    		a=a%50;
    		printf("50 - %d\n",f);
	}
	if(a>=20)
    	{
    		g=a/20;
    		a=a%20;
    		printf("20 - %d\n",g);
	}
	if(a>=10)
    	{
    		h=a/10;
    		a=a%10;
    		printf("10 - %d\n",h);
	}
	if(a>=5)
    	{
    		i=a/5;
    		a=a%5;
    		printf("5 - %d\n",i);
	}
    }
