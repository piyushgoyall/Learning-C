#include<stdio.h>
int evenandodd(int start, int end)
{
	int static esum=0, osum=0;
	int i;
	if(start<=end)
	{
		for(i=start;i<=end;i++)
		{
			if(i%2==0)
			{
				esum = esum+i;
			}
			else
			{
				osum = osum+i;
			}
		}
	}
	printf("Sum of even numbers = %d",esum);
	printf("\n");
	printf("\n");
	printf("Sum of odd numbers = %d",osum);
}
int main()
{
	int start,end,count;
	printf("Enter the starting value :- ");
	scanf("%d",&start);
	printf("\n");
	printf("Enter the ending value :- ");
	scanf("%d",&end);
	printf("\n");
	evenandodd(start,end);
}
