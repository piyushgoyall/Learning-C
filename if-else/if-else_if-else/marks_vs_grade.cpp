#include<stdio.h>
int main()
{
	int p,c,b,m,o,t;
	printf("enter the value of p");
	scanf("%d",&p);
	printf("enter the value of c");
	scanf("%d",&c);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of m");
	scanf("%d",&m);
	printf("enter the value of o");
	scanf("%d",&o);
	t=(p+c+b+m+o)/5;
	if(t>90)
	{
		printf("Grade A");
    	}
    	else if(t>80)
	{
		printf("Grade B");
    	}
    	else if(t>70)
	{
		printf("Grade C");
    	}
     	else if(t>60)
	{
		printf("Grade D");
    	}
     	else if(t>40)
	{
		printf("Grade E");
    	}
    	else
    	{
    		printf("Grade F");
	}
}
