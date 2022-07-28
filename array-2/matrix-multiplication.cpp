//wap to multiply two matrices
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],row,column,product[2][2];
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("Enter any value ");
			scanf("%d",&a[row][column]);
		}
	}
    	printf("\n");
    	for(row=0; row<=1; row++)
    	{
    		for(column=0; column<=1; column++)
    		{
    			printf("%d\t",a[row][column]);
		}
		printf("\n");
	}
	printf("\n");
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("enter any value ");
			scanf("%d",&b[row][column]);
		}
	}
	printf("\n");
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("%d\t",b[row][column]);
		}
		printf("\n");
	}
	printf("\n");
    	for(row=0; row<=1; row++)
    	{
    		for(column=0; column<=1; column++)
    		{
    			product[row][column]=a[row][column]*b[row][column];
    			printf("%d\t",product[row][column]);
		}
		printf("\n");
	}	
}

