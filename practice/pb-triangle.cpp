#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter the first angle : ");
	scanf("%d",&a1);
	printf("\n");
	printf("Enter the second angle : ");
	scanf("%d",&a2);
	printf("\n");
	printf("Enter the third angle : ");
	scanf("%d",&a3);
	printf("\n");
	if(a1>0 && a2>0 &&a3>0)
	{
		if(a1+a2+a3 == 180)
		{
			printf("Valid Triangle");
		}
		else
		{
			printf("Invalid triangle");
		}
	}
}
