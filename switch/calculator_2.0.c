#include<stdio.h>
int main()
{
	char op;
	printf("Enter the operation you want to perform : ");
	scanf("%c",&op);
	printf("\n");

	float num1,num2;
	printf("Enter first number : ");
	scanf("%f",&num1);
	printf("\n");
	printf("Enter second number : ");
	scanf("%f",&num2);
	printf("\n");

    	printf("Answer : ");
	float c=num1+num2;
	float d=num1-num2;
	float e=num1*num2;
	float f=num1/num2;
	switch(op)
	{
    		case '+':
			printf("%.3f",c);
			break;
		case '-':
			printf("%.3f",d);
			break;
		case '*':
			printf("%.3f",e);
			break;
		case '/':
			printf("%.3f",f);
			break;
	}
}
