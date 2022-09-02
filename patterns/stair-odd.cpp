#include<stdio.h>
int main()
{
	int s,e,i,j;
	printf("Enter the number : ");
	scanf("%d",&s);
	printf("\n");
	printf("Enter the number of rows : ");
	scanf("%d",&e);
	printf("\n");
	for(i=1;i<=e;i++)
	{
		for(j=1;j<=(2*e)-1;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%d",s);
			}
			else
			{
				printf(" ");
			}
		}	
		printf("\n");
	}
}
