#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	int power;
	printf("Enter power : ");
	scanf("%d",&power);
	printf("\n");
	int result = 1;
	for(int i=1;i<=power;i++)
	{
		result = result*num;
	}
	printf("Result = %d",result);
}
