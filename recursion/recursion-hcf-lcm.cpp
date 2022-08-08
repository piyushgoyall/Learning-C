#include<stdio.h>
int hcf(int num1,int num2)
{
	int static i=1;
	int static hcfff = 1;
	if(i<=num1||i<=num2)
	{
		if(num1%i==0&&num2%i==0)
		{
			hcfff = i;
		}
		i++;
		hcf(num1,num2);
	}
	else
	{
		return hcfff;
	}
}
int main()
{
	int num1,num2,gcm,lcm;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("\n");
	printf("Enter the second number : ");
	scanf("%d",&num2);
	printf("\n");
	printf("HCF = %d\n",hcf(num1,num2));
	gcm = hcf(num1,num2);
	lcm = (num1*num2)/gcm;
	printf("LCM = %d",lcm);
}
