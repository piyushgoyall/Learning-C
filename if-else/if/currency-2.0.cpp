// WAP to count total number of notes in given amount.
// Available notes are of value : 2000, 500, 200, 100, 50, 20, 10, 5, 2, 1. 
#include<stdio.h>
int main()
{
	int amount;
	printf("Enter the amount : ");
	scanf("%d",&amount);
	printf("\n");
	
	if(amount>0)
	{
		int a = amount/2000;
		printf("Number of notes of value 2000 : %d\n",a);
		amount = amount%2000;
		
		int b = amount/500;
		printf("Number of notes of value 500 : %d\n",b);
		amount = amount%500;
		
		int c = amount/200;
		printf("Number of notes of value 200 : %d\n",c);
		amount = amount%200;
		
		int d = amount/100;
		printf("Number of notes of value 100 : %d\n",d);
		amount = amount%100;
		
		int e = amount/50;
		printf("Number of notes of value 50 : %d\n",e);
		amount = amount%50;
		
		int f = amount/20;
		printf("Number of notes of value 20 : %d\n",f);
		amount = amount%20;
		
		int g = amount/10;
		printf("Number of notes of value 10 : %d\n",g);
		amount = amount%10;
		
		int h = amount/5;
		printf("Number of notes of value 5 : %d\n",h);
		amount = amount%5;
		
		int i = amount/2;
		printf("Number of notes of value 2 : %d\n",i);
		amount = amount%2;
		
		int j = amount/1;
		printf("Number of notes of value 1 : %d\n",j);
		amount = amount%1;
	}
	
	else
	{
		printf("Entered amount is invalid");
	}
	
}
