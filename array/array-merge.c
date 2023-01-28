//wap to merge two arrays to a third array
#include<stdio.h>
int main()
{
	int a[5],b[5],m[10],i;
	for(i=0;i<=4;i++)
	{
		printf("Enter the value for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("First Array : ");
	for(i=0;i<=4;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\n");
	printf("\n");
	for(i=0;i<=4;i++)
	{
		printf("Enter the value for b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	printf("Second Array : ");
	for(i=0;i<=4;i++)
	{
		printf("\t%d",b[i]);
	}
	printf("\n");
	printf("\n");
	printf("Merged array : ");
	for(i=0;i<=9;i++)
	{
		if(i<=4)
		{
			m[i]=a[i];
		}
		else
		{
			m[i]=b[i-5];
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("\t%d",m[i]);
	}
}
