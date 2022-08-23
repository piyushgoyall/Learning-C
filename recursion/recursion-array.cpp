//wap to display all array elements using recursion
#include<stdio.h>
int array(int a[5])
{
	int static i=0;
	if(i<=4)
	{
		printf("%d\t",a[i]);
		i=i+1;
		array(a);
	}
}
int main()
{
	int a[5],i;
	for(i=0;i<=4;i++)
	{
		printf("Enter the value for a[%d] : ",i);
		scanf("%d",&a[i]);
		printf("\n");
		
	}
	printf("Elements of the array :  ");
	array(a);
}
