#include<stdio.h>
int evenandodd(int start, int end)
{
	int static esum=0,osum=0;
 	if(start<=end)
	{
		if(start%2==0)
		{
			esum = esum+start;	
		}
		else
		{
			osum = osum+start;
		}
		evenandodd(start+1,end);
	}
	else
	{
	printf("Even sum = %d\t",esum);
	printf("\n");
	printf("\n");
	printf("Odd sum = %d\t",osum);
	}
}
int main()
{
	int start,end;
	printf("Enter the starting value :- ");
	scanf("%d",&start);
	printf("\n");
	printf("Enter the ending value :- ");
	scanf("%d",&end);
	printf("\n");
	evenandodd(start,end);
}
