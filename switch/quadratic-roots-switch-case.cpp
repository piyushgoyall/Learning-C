// WAP to find roots of a quadratic equation using switch case.

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter the cofficient of x^2 : ");
	scanf("%d",&a);
	printf("\n");
	
	printf("Enter the cofficient of x : ");
	scanf("%d",&b);
	printf("\n");
	
	printf("Enter the constant value : ");
	scanf("%d",&c);
	printf("\n");
	
	printf("The entered quadratic equation is : (%d)x^2 + (%d)x + (%d)\n\n",a,b,c);
	
	int D = (pow(b,2)) - (4*a*c);
//	printf("%.3f",D);
	
	float root1,root2;
	float d = sqrt(D),real,imag; 
	
	int e = D>0;
	switch(e)
	{	
		case 1:
			root1 = (-(b) + d)/(2*a);
			root2 = (-(b) - d)/(2*a);
			printf("Both roots are distinct with values : %.3f and %.3f",root1,root2);
			break;
			
		case 0:
			real = -b/(2*a);
			imag=sqrt(-D)/(2*a);
			if(real==0)
			{
				printf(" Imaginary roots with value : %.3f i and -%.3f i",imag,imag);
			}
			else
			{
				printf("Imaginary roots with value : %.3f + %.3f i and %.3f - %.3f i",real,imag,real,imag);
			}
			
		default:
			root1 = -(b)/a;
			printf("Both roots are equal with value : %.3f",root1);
			break;
	}
}
