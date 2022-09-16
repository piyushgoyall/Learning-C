#include<stdio.h>
int main()
{
	int a[3][3],row ,column;
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=2; column++)
		{
			printf("enter any value ");
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
	printf("Upper triangular matrix:\n");
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=2; column++)
		{
			if(row>=column)
			{
				printf("%d",a[row][column]);
			}
			if(row<column)
			{
				printf("0");
				printf("\t");
			}
			else
			{
				printf("\t");
		    	}
		}
		printf("\n");
	}
}
	
