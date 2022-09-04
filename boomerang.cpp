#include<stdio.h>
int main()
{
	int row,column;
	for(row=0; row<=10;row++)
	{
		for(column=0; column<=10; column++)
		{
			if(row<=5)
			{
				if(column == 10-row)
				{
					printf("*");
				}
				else
				{
					printf("0");
				}
			}
		}
		printf("\n");
	}
}
