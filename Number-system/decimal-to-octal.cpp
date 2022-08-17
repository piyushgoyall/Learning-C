#include<stdio.h>
int main()
{
	int n,l,i=0,b[8];
	printf("Enter the deimal number : ");
	scanf("%d",&n);
	printf("\n");
	while(n>0)
	{
		l=n%8;
		n=n/8;
		b[i]=l;
		i++;
	}
	printf("Octal for the entered decimal number : ");
	for(int k=i-1;k>=0;k--)
	{
		printf("%d",b[k]);
	}
}
