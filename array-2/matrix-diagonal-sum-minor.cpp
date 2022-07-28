//wap to find sum of minor diagonal elements of a matrix
#include<stdio.h>
int main()
{
	int a[3][3],row,column,sum=0;
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=2; column++)
		{
			printf("Enter any value ");
			scanf("%d",&a[row][column]);
		}
	}
	printf("\n");
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=2; column++)
		{
			printf("%d\t",a[row][column]);
		}
		printf("\n");
	}
	printf("\n");
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=2; column++)
		{
			if((row+column)==2)
			{
				sum=sum+a[row][column];
			}
		}
	}
	printf("Sum of minor diagonal elements = %d",sum);
}
