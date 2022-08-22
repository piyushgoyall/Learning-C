#include<stdio.h>
int main()
{
	int num,l,sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	while(num!=0)
	{
		l = num%10;
		sum = sum+l;
		num = num/10;
	}
	printf("Sum of the digits of the number : %d",sum);
}
