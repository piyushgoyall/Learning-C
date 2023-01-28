//wap to find the higest frequency value in an array
#include<stdio.h>
int main()
{
	int a[5],pos;
	for(pos=0;pos<=4;pos++)
	{
		printf("enter the value for a[%d] ",pos);
		scanf("%d",&a[pos]);
	}
	
	for(pos=0;pos<=4;pos++)
	{
		printf("Element of a[%d] = %d\n",pos,a[pos]);
	}
	printf("\n");
	int count=0, max=0,j;
	for(pos=0; pos<=4; pos++)
	{
		count = 0;
		for(j=0; j<=4;j++)
		{
			if(a[pos] == a[j] && pos != j)
			{
				count = count+1;
			}			
		}
		if(count>max)
		{
			max = count;
		}
	}
	for(pos=0; pos<=4; pos++)
	{
		count = 0;
		for(j=0; j<=4;j++)
		{
			if(a[pos] == a[j] && pos != j)
			{
				count = count+1;
			}			
		}
		if(count==max)
		{
			printf("Highest frequency value = %d\n",a[pos]);
		}
	}
}
