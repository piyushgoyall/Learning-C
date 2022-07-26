//wap to find sum of all array elements
#include<stdio.h>
int main()
{
	int a[5],pos,sum=0;
	for(pos=0;pos<=4;pos++)
	{
		printf("enter the value for a[%d] ",pos);
		scanf("%d",&a[pos]);
	}
	for(pos=0;pos<=4;pos++)
	{
		printf("Element of a[%d] = %d\n",pos,a[pos]);
		sum=sum + a[pos];
	}
	printf("\n");
	printf("Sum of array = %d",sum);
}
