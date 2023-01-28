//wap to enter an array and sort it in ascending order
#include<stdio.h>
int main()
{
	int a[5],pos,j,temp;
	for(pos=0; pos<=4; pos++)
	{
		printf("Enter the value for a[%d] " ,pos);
		scanf("%d",&a[pos]);
	}
	printf("\n");
	for(pos=0; pos<=4; pos++)
	{
		for(j=0; j<=4; j++)
		{
			if(a[pos] < a[j])
			{
				temp = a[pos];
				a[pos] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nsorted array:\n");
	for(pos=0; pos<=4; pos++)
	{
		printf("%d\t",a[pos]);
	}
}
