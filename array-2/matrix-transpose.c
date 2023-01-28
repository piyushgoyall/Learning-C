//wap to find transpose of a matrix
#include<stdio.h>
int main()
{
	int a[3][2],row,column,b[2][3];
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("Enter any value ");
			scanf("%d",&a[row][column]);
		}
	}
	printf("\n");
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("%d\t",a[row][column]);
		}
		printf("\n");
	}
	printf("\n");
	printf("A transpose:\n");
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=2; column++)
		{
			b[row][column]=a[column][row];
			printf("%d\t",b[row][column]);
		}
		printf("\n");
	}
}
