#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j<=4)
			{
				if(j<=4-i)
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
				if(j>=4+i)
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
	for(i=0;i<=3;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j<=4)
			{
				if(j<=i+1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if(j>=5)
			{
				if(j>=7-i)
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
}
