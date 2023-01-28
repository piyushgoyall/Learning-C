//wap to enter any number and check if it is armstrong using function.
#include<stdio.h>
#include<math.h>
int armstrong(int num)
{
	int number,i,sum=0,count=0;
	for(number=num;number!=0;number=number/10 )
	{
		count = count+1;
	}
	for(number=num;number!=0;number=number/10 )
	{
		i=number%10;
		printf("%d\t",i);
		sum=sum + pow(i,count);
		printf("%d\n",sum);
	}
	printf("\n");
	if(num == sum)
	{
	    printf("%d is an Armstrong number",num);
	}
	else
	{
      printf("%d is not an Armstrong number",num);
	}
}
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	armstrong(num);
}
