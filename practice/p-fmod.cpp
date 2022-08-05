#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter the value of a :- ");
	scanf("%f",&a);
	printf("\n");
	printf("Enter the value of b :- ");
	scanf("%f",&b);
	printf("\n");
	c = fmod(a,b);
	printf("Remainder = %f",c);
}

