#include<stdio.h>
int even(int num)
{
	if(num%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
}
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	even(num);
} 
