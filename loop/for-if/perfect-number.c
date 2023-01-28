//wap to enter any number and check if it is a perfect number
#include<stdio.h>
int main()
{
	int num,i,sum=0,product=1;
	printf("enter the number ");
	scanf("%d",&num);
	for(int i=1;i<num;i++)
	{
		if(num%i == 0)
		{
		  printf("%d\t",i);
		  sum = sum+ i;
		  product = product*i;	
                }
	}
	if(sum==num&&product==num)
	{
		printf("\n%d is a perfect number",num);
	}
	else
	{
		printf("\n%d is not a perfect number",num);
	}
}
