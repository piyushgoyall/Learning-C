#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	float power;
	printf("Enter the power in floating value : ");
	scanf("%f",&power);
	printf("\n");
	float result = pow(num,power);
	printf("Result : %f",result);
}

