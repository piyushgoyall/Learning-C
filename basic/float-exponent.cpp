#include<stdio.h>
#include<math.h>
int main()
{
	float num;
	printf("Enter the float number : ");
	scanf("%f",&num);
	printf("\n");
	float power;
	printf("Enter the float power : ");
	scanf("%f",&power);
	printf("\n");
	float result = pow(num,power);
	printf("Result : %f",result);
}

