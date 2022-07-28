//wap to add two matrices  
#include<stdio.h>
int main()
{
	int first[2][2],second[2][2],row,column,sum[2][2];
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("enter any value ");
			scanf("%d",&first[row][column]);
		}
	}
	printf("\n");
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("%d\t",first[row][column]);
		}
		printf("\n");
	}
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("enter any value ");
			scanf("%d",&second[row][column]);
		}
	}
	printf("\n");
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("%d\t",second[row][column]);
		}
		printf("\n");
	}
	printf("\n");
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			sum[row][column]=first[row][column]+second[row][column];
	        printf("%d\t",sum[row][column]);
		}
		printf("\n");
	} 
}
