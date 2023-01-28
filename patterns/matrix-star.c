#include<stdio.h>
int main()
{
	int a[5][5],row,column;
	
	for(row=0; row<=4; row++)
	{
		for(column=0; column<=4; column++)
		{
			printf("*");
		}
		printf("\n");
	}
}
