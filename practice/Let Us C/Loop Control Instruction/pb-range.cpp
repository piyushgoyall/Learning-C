/*Write a program to find the range of a set of numbers. Range is the difference between 
the smallest and biggest number in the list. */
#include<stdio.h>
int main()
{
	int num,limit,max=0,min=0,range;
	printf("Enter the limit : ");
	scanf("%d",&limit);
	printf("\n");
	int i=1;
	while(i<=limit)
	{
		printf("Enter the number : ");
		scanf("%d",&num);
		printf("\n");
		if(num>max)
		{
			max=num;
		}
		if(i==1)
		{
			min=num;
		}
		if(num<min)
		{
			min=num;
		}
		i=i+1;
	}
	printf("Max = %d",max);
	printf("\n");
	printf("Min = %d",min);
	range = max-min;
	printf("\n");
	printf("\n");
	printf("Range of the entered numbers is : %d",range);
}
