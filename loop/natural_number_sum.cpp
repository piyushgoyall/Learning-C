#include<stdio.h>
int main()
{
	int a,n,sum=0;
	printf("enter the value of n ");
	scanf("%d",&n);
	for(int a=1; a<=n; a++)
	{
		sum=sum+a;
	}
printf("%d",sum);	
}
