//wap to copy all elements of an array to another array
#include<stdio.h>
int main()
{
	int a[7],b[7],pos;

	for(pos = 0;pos<=6;pos++)
	{
		printf("Enter the value for a[%d] ",pos);
	    	scanf("%d",&a[pos]);
	}
	for(pos = 0;pos<=6;pos++)
	{
		printf("Element of a[%d] = %d\n",pos,a[pos]);
		b[pos] = a[pos];
	}
	printf("\n");
    	for(pos=0; pos<=6;pos++)
    	{
        	printf("Element of b[%d] = %d\n",pos,b[pos]);
    	}
}
