#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,b=0,i=0;
	printf("Enter the binary number : ");
	scanf("%d",&n);
	printf("\n");
	while(n>0)
	{
		l=n%10;
		b=b+l*pow(2,i);
		n=n/10;
		i=i+1;
	}
	printf("Decimal for the entered binary : %d\t",b);
}
