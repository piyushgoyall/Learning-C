//wap to find second largest element in an array
#include<stdio.h>
int main()
{
	int a[5],pos,max,min,sec_largest;
	for(pos=0;pos<=4;pos++)
	{
		printf("enter the value for a[%d] ",pos);
		scanf("%d",&a[pos]);
	}
	max = min = a[0];
	for(pos=0; pos<=4; pos++)
	{
		if(a[pos] > max)
		max= a[pos];
		if(a[pos] < min)
		min= a[pos];
	}
	printf("Max = %d\nMin = %d",max,min);
	sec_largest = a[0];
	for(pos=0; pos<=4; pos++)
	{
		if(a[pos]<max && a[pos]>min)
		{
			if(sec_largest<a[pos])
			{
				sec_largest = a[pos];
			}
		}
	}
	printf("\nSecond largest element = %d",sec_largest);
}
