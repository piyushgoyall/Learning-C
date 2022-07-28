//wap to multiply two matrices
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k;
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			printf("enter any value ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			printf("enter any value ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			c[i][j]=0;
			for(k=0; k<=1; k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]); 
			}
		}
	}
	printf("A*B:\n");
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

