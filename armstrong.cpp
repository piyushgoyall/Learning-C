//wap to enter any number and check if it is armstrong
#include<stdio.h>
int main()
{
	int original_num,num,i,sum=0;
	printf("enter the number ");
	scanf("%d",&original_num);
	for(num=original_num;num!=0;num=num/10 )
	{
		i=num%10;
		printf("%d\t",i);
		sum=sum+(i*i*i);
		printf("%d\n",sum);
	}

	if(original_num == sum)
	{
	    printf("armstrong number");
	}
	else
	{
      printf("not an armstrong number");
	}
}
