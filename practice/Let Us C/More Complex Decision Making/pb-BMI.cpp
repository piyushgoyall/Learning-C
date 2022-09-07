/*The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square of the height (in meters). 
Write a program that receives weight and height, calculates the BMI, and reports the BMI category.*/
#include<stdio.h>
#include<math.h>
int main()
{
	float height,weight,BMI;
	printf("Enter the Weight(in Kg) : ");
	scanf("%f",&weight);
	printf("\n");
	printf("Enter the Height(in meters) : ");
	scanf("%f",&height);
	printf("\n");
	BMI=weight/pow(height,2);
	printf("BMI : %f\n\n",BMI);
	printf("Category : "); 
	if(BMI<15)
	{
		printf("Starvation");
	}
	else if(BMI>=15.1 && BMI<=17.5)
	{
		printf("Anorexic");
	}
	else if(BMI>17.5 && BMI<=18.5)
	{
		printf("Underweight");
	}
	else if(BMI>18.5 && BMI<=24.9)
	{
		printf("Ideal");
	}
	else if(BMI>24.9 && BMI<=29.9)
	{
		printf("Overweight");
	}
	else if(BMI>29.9 && BMI<=30.9)
	{
		printf("Obese");
	}
	else if(BMI>30.9)
	{
		printf("Morbidly Obese");
	}
}
