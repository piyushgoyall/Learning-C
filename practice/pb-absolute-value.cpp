#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	if(num<0)
	{
		num = num * (-1);
		printf("Absolute value : %d",num);
	}
	else
	{
		printf("Absolute value : %d",num);
	}
}
