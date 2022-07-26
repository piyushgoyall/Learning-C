//wap to find reverse of an array
#include<stdio.h>
int main()
{
	int a[5],b[5],pos;
	for(pos = 0;pos<=4;pos++)
	{
		printf("Enter the value for a[%d] ",pos);
	    scanf("%d",&a[pos]);
	}
	for(pos = 0;pos<=4;pos++)
	{
		printf("Element of a[%d] = %d\n",pos,a[pos]);
	}
	printf("\n");
    for(pos=0; pos<=4;pos++)
    {
        b[4-pos] = a[pos];
		
    }
    for(pos = 0;pos<=4;pos++)
	{
		printf("Element of b[%d] = %d\n",pos,b[pos]);
	}
}
