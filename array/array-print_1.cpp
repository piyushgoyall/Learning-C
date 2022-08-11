#include<stdio.h>
int main()
{
	int a[5],pos;
	for(pos=0;pos<=4;pos++)
	{
		printf("enter the value for a[%d]",pos);
		scanf("%d",&a[pos]);
	}
	for(pos=0;pos<=4;pos++)
	{
		printf("Element of a[%d] = %d\n",pos,a[pos]);
	}
}
