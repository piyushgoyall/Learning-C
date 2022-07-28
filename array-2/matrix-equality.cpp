//wap to check if two matrices ar equal or not
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],row,column,flag=1;
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
			printf("Enter any value ");
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
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			if(a[row][column] != b[row][column])
	        {
	        	flag=0;
	        	break;
			}
		}	
	}
	
	if(flag==1)
	{
		printf("Matrix are equal");
	}
	else
	{
		printf("Matrix are not Equal");
	}
}
