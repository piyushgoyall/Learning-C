#include<stdio.h>
int main()
{
	int number1,number2,lcm,i,gcm;
	printf("enter the first number ");
	scanf("%d",&number1);
	printf("enter the second number ");
	scanf("%d",&number2);
	
	for(int i=1; i<=number1||i<=number2; i++)
	{
		if(number1%i == 0&&number2%i==0)
		{
			gcm = i;
		}
	}
	
	printf("GCM: %d\n",gcm);
	
	lcm = (number1*number2)/gcm;
	
	printf("LCM: %d",lcm);
	
	
}
