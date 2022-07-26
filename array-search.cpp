//wap to search an element in an array
#include<stdio.h>
int main()
{
	int a[5],pos,search;
	int flag = 0;
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
	printf("Enter the element to be searched ");
	scanf("%d",&search);
    for(pos=0;pos<=4;pos++)
    {
    	if(search==a[pos])
		{
			flag=1;
			break;
			
		}
		
	}
	
	if(flag==1)
	{
		printf("Element Found");
	}
	else
	{
		printf("Element Not Found");
	}
	
}
