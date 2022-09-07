/*Population of a town today is 1,00,000. The population has increased steadily at the rate of 10% per year 
for last 10 years. Write a program to determine the population at the end of each year in the last decade.*/
#include<stdio.h>
int main()
{
	int people=100000,pop;
	int i,y;
	for(i=10;i>=1;i--)
	{
		if(i==10)
		{
			pop=people;
		}
		else
		{
			pop=people-(10*people)/100;
		}
		printf("Population in year %d : %d\n",i,pop);
		people=pop;
	}
	printf("\n");
	printf("(Some values are approximate)");
}
