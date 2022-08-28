#include<stdio.h>
int main()
{
	int i,j,n,count=0,k=0;
	printf("Enter the row value  : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=count;
		for(j=1;j<=count;j++)
		{
			printf(" ");
		}
		for(j=count+1;j<=i+k;j++)
		{
			printf("*");
			count++;
		}
		printf("\n");
	}
}
