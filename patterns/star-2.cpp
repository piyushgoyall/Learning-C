#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(j<=4)
			{
				if(j<=4-i)
				{
					printf("*\t");
				}
				else
				{
					printf(" \t");
				}
			}
			else
			{
				if(j>=10-(5-i))
				{
					printf("*\t");
				}
				else
				{
					printf(" \t");
				}
			}
		}
	}
	printf("\n");
}

