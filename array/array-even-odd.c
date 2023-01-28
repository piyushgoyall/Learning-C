//wap to put even and odd elements of array in two separate array
#include<stdio.h>
int main()
{
	int a[5],even[5],odd[5],pos;
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
	for(pos=0; pos<=4;pos++)
	{
		if(a[pos]%2 == 0)
		{
			even[pos]=a[pos];
			printf("Element of even[%d]=%d\n",pos,even[pos]);
		}		
	}
	printf("\n");
	for(pos=0;pos<=4;pos++)
	{
		if(a[pos]%2 == 1)
		{
			odd[pos]=a[pos];
			printf("Element of odd[%d]=%d\n",pos,odd[pos]);
		}
	}
}
	
  
