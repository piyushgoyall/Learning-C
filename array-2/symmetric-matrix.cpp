#include<stdio.h>
int main()
{
	int a[3][3],row,column,flag=1;
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
			if(a[row][column] != a[column][row])
			{
				flag=0;
			}
		}
	}
	if(flag==1)
	{
		printf("Symmetric matrix");
	}
	else
	{
		printf("Not a symmetric matrix");
	}
	
}
