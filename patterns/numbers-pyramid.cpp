#include<stdio.h>
int main()
{
	int row,column;
	for(row=0; row<=4; row++)
	{
		for(column=0; column<=row; column++)
		{
			printf("%d",(column+1));
		}
	printf("\n");
	}
	for(row=0; row<=3; row++)
	{
		for(column=0; column<=3-row;  column++)
		{
			printf("%d",(column+1));
		}
	printf("\n");
	}
}
