//wapto perform scalar matrix multiplication
#include<stdio.h>
int main()
{
	int a[2][2],row,column,scalar,product[2][2];
	for(row=0; row<=1; row++)
	{
		for(column=0; column<=1; column++)
		{
			printf("enter any value ");
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
	printf("Enter the number you want to multipy with the matrix ");
	scanf("%d",&scalar);
        for(row=0; row<=1; row++)
        {
    	        for(column=0; column<=1;column++)
    	        {
    		        product[row][column]=scalar*a[row][column];
    		        printf("%d\t",product[row][column]);
		}
	        printf("\n");
	}
}
