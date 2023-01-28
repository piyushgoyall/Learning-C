#include<stdio.h>
int main()
{
	int row,column;
	for(row=0; row<6; row++)
	{
		for(column=0; column<=12;column++)
		{
			if(column == row+1)
			{
				printf("%d",column);
			}
			else if(column == 11-(row))
			{
				printf("%d",(row+1));
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(row=0; row<5; row++)
	{
		for(column=0; column<=12; column++)
		{
			if(column == 5-row)
			{
				printf("%d",column);
			}
			else if(column == 7 + row)
			{
				printf("%d",5-row);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
