#include<stdio.h>
void printcount(int start, int end)
{
	if(start<(end-1))
	{
		printf("%d\t",start+1);
		printcount(start+1,end);
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
	printcount(start,end);
}
