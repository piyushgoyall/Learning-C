#include<stdio.h>
int main()
{
	int no,l;
	printf("enter the number");
	scanf("%d",&no);
	l=no%10;
	while(no>10)
	{
		no=no/10;
	}
	printf("first digit: %d\n",no);
	printf("last digit: %d",l);
    
} 


