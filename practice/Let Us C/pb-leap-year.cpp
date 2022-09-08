/*Any year is input through the keyboard. Write a function to
determine whether the year is a leap year or not. */
#include<stdio.h>
int leap(int year)
{
	if(year>0)
	{
			
		if(year%4==0)
		{
			printf("%d is a Leap Year",year);
		}
		else
		{
			printf("%d is not a Leap Year",year);
		}
	}
	else
	{
		printf("Invalid");
	}
}
int main()
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	printf("\n");
	leap(year);
}
