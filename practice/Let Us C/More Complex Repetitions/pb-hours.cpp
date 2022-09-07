/*Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.*/
#include<stdio.h>
int main()
{
	int hour;
	for(hour=1;hour<=24;hour++)
	{
		if(hour<12)
		{
			printf("Time = %d AM\n",hour);
		}
		else if(hour==12)
		{
			printf("Time = %d Noon\n",hour);
		}
		else if(hour>12&&hour<24)
		{
			printf("Time = %d PM\n",hour-12);
		}
		else if(hour==24)
		{
			printf("Time = %d Midnight\n",hour-12);
		}
	}
}
