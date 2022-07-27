//wap to enter an array and print it's unique elements
#include<stdio.h>
int main()
{
	int a[5],pos,j,flag;
	for(pos=0; pos<=4; pos++)
	{
		printf("Enter the value for a[%d] " ,pos);
		scanf("%d",&a[pos]);
	}
	printf("\n");
	for(pos=0; pos<=4; pos++)
	{
		flag = 1;
		for(j=pos+1; j<=4; j++)
		{
			if(a[pos] == a[j])
			{
				flag=0;
			}
		}
			if(flag==1)
			{
				printf("%d\t",a[pos]);
			}
	}
}
