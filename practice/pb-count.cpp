/*Write a program to enter numbers till the user wants. 
At the end it should display the count of positive, negative and zeros entered.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,pos=0,neg=0,zero=0,limit;
	printf("Enter the limit : ");
	scanf("%d",&limit);
	printf("\n");
	int i=1;
	while(i<=limit)
	{
		printf("Enter number %d : ",i);
		scanf("%d",&num);
		if(num>0)
		{
			pos=pos+1;
		}
		if(num<0)
		{
			neg=neg+1;
		}
		if(num==0)
		{
			zero=zero+1;
		}
		i=i+1;
	}
	printf("\n");
	printf("Total positive : %d\n",pos);
	printf("Total negative : %d\n",neg);
	printf("Total zeroes0 : %d",zero);
}
