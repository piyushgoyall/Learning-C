#include<stdio.h>
#include<math.h>
int main()
{
	int num,rem,count=0,arm=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	int temp=num,flag=num;
	while(num>0)
	{
		num=num/10;
		count=count+1;
	}
	while(temp>0)
	{
		rem=temp%10;
		temp=temp/10;
		arm=arm+pow(rem,count);
	}
	if(flag==arm)
	{
		printf("%d is an armstrong number",flag);
	}
	else
	{
		printf("%d is not an armstrong number",flag);
	}
}
