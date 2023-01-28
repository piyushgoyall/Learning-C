//wap to enter ant number and print it's factors
#include<stdio.h>
int main()
{
	int i,no;
	printf("enter the number ");
	scanf("%d",&no);
	for(int i=1; i<=no; i++)
	{
		if(no%i == 0)
		{
		printf("%d\t",i);
	}
	}
	
}
