#include<stdio.h>
#include<math.h>
int main()
{
	int start,end,temp,num,sum,rem,n;
	printf("Enter the starting value : ");
	scanf("%d",&start);
	printf("\n");
	printf("Enter the ending value : ");
	scanf("%d",&end);
	printf("\n");
	printf("Armstrong numbers between the given interval are : ");
	while(start<=end)
	{
		num=temp=start;
		n=sum=0;
		while(temp)
		{
			temp=temp/10;
			n++;
		}
		while(num)
		{
			rem=num%10;
			sum=sum+pow(rem,n);
			num=num/10;
		}
		if(start==sum)
		{
			printf("%d\t",start);
		}
		start++;
	}
}
