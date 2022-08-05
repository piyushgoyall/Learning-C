#include<stdio.h>
int evenandodd(int start, int end)
{
	if(start<=end)
	{
		if(start%2==0)
		{
			printf("%d\t",start);
		}
		
		evenandodd(start+1,end);
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

