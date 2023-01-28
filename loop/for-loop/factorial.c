//wap to enter any number anf calculate it's factorial
#include<stdio.h>
int main()
{
	int number,i,factorial=1;
    	printf("enter the number ");
    	scanf("%d",&number);
	for(int i=1; i<=number; i++)
	{
		factorial=factorial*i;
	}
	printf("%d",factorial);
}
