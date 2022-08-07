//C program to find roots of a quadratic equation (integer cofficients only)
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,e,f,g,h,root_1,root_2,real,imag;
	printf("Enter the cofficient of x^2 : ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the cofficient of x : ");
	scanf("%d",&b);
	printf("\n");
	printf("Enter the constant term : ");
	scanf("%d",&c);
	printf("\n");
	printf("Entered quadratic equation : %dx^2 + (%d)x + %d",a,b,c);
	printf("\n");
	printf("\n");
	f = pow(b,2);
	g = 4*a*c;
	d = f - g;
	e = sqrt(d);
	h = 2*a;
	if(d>0)
	{
		root_1 = (-b+e)/h;
		root_2 = (-b-e)/h;
		printf("Root-1 : %f",root_1);
		printf("\n");
		printf("\n");
		printf("Root-2 : %f",root_2);
	}
	else if(d==0)
	{
		root_1=root_2 = -b/h;
		printf("Equal roots with value : %f",root_1);
	}
	else
	{
		real = -b/h;
		imag=sqrt(-d)/h;
		if(real==0)
		{
			printf("Roots of equation : %fi and -%fi",imag,imag);
		}
		else
		{
			printf("Roots of equation : %f+%fi and %f-%fi",real,imag,real,imag);
		}
	}
}
