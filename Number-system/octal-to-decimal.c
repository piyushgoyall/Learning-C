#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,i=0,b=0;
	printf("Enter the octal number : ");
	scanf("%d",&n);
	printf("\n");
	while(n>0)
	{
		l=n%10;
		b=b+l*pow(8,i);
		n=n/10;
		i++;
	}
	printf("Decimal for the entered octal number : %d",b);
}
