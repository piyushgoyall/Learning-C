//wap to enter a number and find sum of its digits excluding the digits at extremities.
#include<stdio.h>
int main()
{
	int num,rem,sum=0,mod,sumf=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	rem=num%10;
	while(num>0)
	{
		mod=num%10;
		num=num/10;
		sum=sum+mod;
	}
	sumf=sum-rem-mod;
	printf("Sum = %d",sumf);
}
