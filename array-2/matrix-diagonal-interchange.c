#include<stdio.h>
int main()
{
	int a[3][3],row,column,temp=0;
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
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=2; column++)
		{
			if(column == (2-row))
			{
				temp=a[row][column];
				a[row][column]=a[row][row];
				a[row][row]=temp;
			}
		}
		printf("\n");
	}
	printf("Swapped matrix:\n");
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=2; column++)
		{
			printf("%d\t",a[row][column]);
		}
		printf("\n");
	}
}
