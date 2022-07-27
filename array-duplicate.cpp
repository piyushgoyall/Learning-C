//wap to enter an array and print the duplicate elements
#include<stdio.h>
int main()
{
	int a[5],pos,j,flag;
	for(pos=0; pos<=4; pos++)
	{
		printf("Enter the value for a[%d] ",pos);
		scanf("%d",&a[pos]);
	}
	printf("\n");
	for(pos=0; pos<=4; pos++)
	{
		flag = 0;
		for(j=pos+1; j<=4; j++)
		{
			if(a[pos] == a[j])
			{
				flag=1;
				printf("duplicate element = %d\t",a[pos]);
			}
		}
	}
}
