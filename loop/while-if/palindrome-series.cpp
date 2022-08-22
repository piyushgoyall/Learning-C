//Palindrome number series for a given range
#include<stdio.h>
int main()
{
	int start,end,rem,rev,i,temp;
	printf("Enter the starting value : ");
	scanf("%d",&start);
	printf("\n");
	printf("Enter the ending value : ");
	scanf("%d",&end);
	printf("\n");
	printf("Palindrome numbers in between the given range are : \n");
	for(i=start;i<=end;i++)
	{
		temp=i;
		rev=0;	
		while(temp>0)
		{
			rem=temp%10;
			temp=temp/10;
			rev=(rev*10)+rem;
		}
		if(i==rev)
		{
			printf("%d\t",i);
		}
	}
}

