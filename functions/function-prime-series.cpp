#include<stdio.h>
int primeseries(int a, int b)
{
	int i,flag;
	while(a<=b&&a>=2)
	{
		flag=1;
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("%d\t",a);
		}
		a=a+1;
	}
}
int main()
{
	int a,b;
	printf("Enter the starting value : ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the ending value : ");
	scanf("%d",&b);
	printf("\n");
	primeseries(a,b);
}
