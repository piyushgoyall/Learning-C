//wap to count total number of negative elements in an array
#include<stdio.h>
int main()
{
	int a[5],pos,count=0;
	for(pos=0;pos<=4;pos++)
	{
		printf("enter the value for a[%d] ",pos);
		scanf("%d",&a[pos]);
	}
	for(pos=0;pos<=4;pos++)
	{
		if(a[pos]<0)
		{
			printf("Negative element [%d] = %d\n",pos,a[pos]); 
			count++;
		}
	}
	printf("Total negative elements = %d",count);
}
