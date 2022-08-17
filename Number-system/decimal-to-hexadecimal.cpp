#include<stdio.h>
int main()
{
	int n,l,i=0;
	char b[16];
	printf("Enter the deimal number : ");
	scanf("%d",&n);
	printf("\n");
	while(n>0)
	{
		l=n%16;
		if(l<10)
		{
			b[i]=48+l;
			i++;
		}
		else 
		{
			b[i]=l+55;
			i++;
		}
		n=n/16;
	}
	printf("Hexadecimal for the entered decimal number : ");
	for(int k=i-1;k>=0;k--)
	{
		printf("%c",b[k]);
	}
}
