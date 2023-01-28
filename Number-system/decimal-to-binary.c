#include<stdio.h>
int main()
{
	int num,l,i=0,b[20];
	printf("Enter the decimal number : ");
	scanf("%d",&num);
	printf("\n");
	while(num>=1)
	{
		l=num%2;
		num=num/2;
		b[i]=l;
		i=i+1;
	}
	for(int k=i-1;k>=0;k--)
	{
		printf("%d",b[k]);
	}
}
