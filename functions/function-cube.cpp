//wap to enter a number and print its cube using function
#include<stdio.h>
float cube(float num)
{
	float c = num*num*num;
	return c;
}
int main()
{
	float num;
	printf("Enter the number : ");
	scanf("%f",&num);
	printf("\n");
	printf("Cube of %f = %.4f",num,cube(num));
}
