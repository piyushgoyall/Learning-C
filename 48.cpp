#include<stdio.h>
int main()
{
	int a,n,table=1;
	printf("enter the table value ");
	scanf("%d",&n);
	for(int a=1; a<=10; a++)
	{
		table=n*a;
	printf("%d\n",table);
	}
	
}
