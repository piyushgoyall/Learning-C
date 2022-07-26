#include<stdio.h>
int main()
{
	int a[5],pos,max,min;
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
}
