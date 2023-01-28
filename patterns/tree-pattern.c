#include<stdio.h>
int main()
{
	int row,column;
	for(row=0; row<=5; row++)
	{
		for(column=0; column<=10; column++)
		{
			if(column<=5)
			{
				if(column>4-row)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				if(column<=5+row)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	for(row=0; row<=2; row++)
	{
		for(column=0; column<=11; column++)
		{
			if(column<=6 && column>=4)
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
