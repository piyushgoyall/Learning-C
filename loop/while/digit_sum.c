//wap to enter any number and find sum of it's digits
#include<stdio.h>
int main()
{
	int no,sum=0,l;
	printf("enter the number ");
	scanf("%d",&no);
	while(no>0)
	{
		l=no%10;
		sum=sum+l;
		no=no/10;
	}
	printf("sum= %d",sum);
}

