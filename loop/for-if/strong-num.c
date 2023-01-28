#include<stdio.h>
int main()
{
	int original_num,num,factorial=1,sum=0,i,j;
	printf("enter the number ");
	scanf("%d",&original_num);
	for(num=original_num;num!=0;num=num/10 )
	{
		i=num%10;
		printf("%d\t",i);
	        factorial = 1;
	        for(j=1;j<=i;j++)
	        {
	    	    factorial = factorial*j;
		}
	sum = sum+factorial;
	}
	if(sum==original_num)
	{
		printf("\n%d is a strong number",original_num);
	}
	else
	{
		printf("\n%d is not a strong number",original_num);
	}
}
