#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,b=0,i=0,oct,p,c[8],q=0;
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
	printf("Decimal for the entered binary : %d",b);
	printf("\n");
	printf("\n");
	oct=b;
	while(oct>0)
	{
		p=oct%8;
		oct=oct/8;
		c[q]=p;
		q++;
	}
	printf("Octal for the entered binary number : ");
	for(int k=q-1;k>=0;k--)
	{
		printf("%d",c[k]);
	}
}
