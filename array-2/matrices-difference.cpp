//wap to subtract two matrices  
#include<stdio.h>
int main()
{
	int first[2][2],second[2][2],row,column,diff[2][2];
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
			diff[row][column]=second[row][column]-first[row][column];
	        printf("%d\t",diff[row][column]);
		}
	printf("\n");
	} 
}
