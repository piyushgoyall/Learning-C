//wap to print all prime numbers between two numbers
#include<stdio.h>
int main()
{
	int a,b,i,flag;
	printf("Enter the starting value : ");
	scanf("%d",&a);
	printf("Enter the ending value : ");
	scanf("%d",&b);
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
