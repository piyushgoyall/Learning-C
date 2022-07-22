#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a ==1)
	{
		printf("the day is monday");
	}
	else if(a == 2)
	{ 
	printf("today is tuesday");
	}
	else if(a == 3)
	{ 
	printf("today is wednesday");
	}
	else if(a == 4)
	{ 
	printf("today is thursday");
	}
	else if(a == 5)
	{ 
	printf("today is friday");
	}
	else if(a == 6)
	{ 
	printf("today is saturday");
	}
	else if(a == 7)
	{ 
	 printf("today is sunday");
	}
	else 
	{
		printf("invalid");
	}
}
