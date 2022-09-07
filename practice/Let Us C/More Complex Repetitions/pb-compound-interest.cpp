/*When interest compounds q times per year at an annual rate of r % for n years, the principle p compounds to an amount a as per
the following formula :
a = p ( 1 + r / q )^nq
Write a program to read 10 sets of p, r, n & q and calculate the corresponding as. */
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float p,r,n,q,a;
	for(i=0;i<10;i++)
	{
		printf("Enter the principle amount : ");
		scanf("%f",&p);
		printf("Enter the annual rate : ");
		scanf("%f",&r);
		printf("Enter the years : ");
		scanf("%f",&n);
		printf("Enter the compounding period : ");
		scanf("%f",&q);
		printf("\n");
		a=p+pow((1+(r/p)),(n*q));
		printf("Total amount = %f",a);
		printf("\n");
		printf("\n");
	}
}
