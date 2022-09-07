/*Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees.*/
#include<stdio.h>
int main()
{
	float far,cen;
	printf("Enter the Fahrenheit temperature : ");
	scanf("%f",&far);
	printf("\n");
	cen=((far-32)*5)/9;
	printf("%f degree celcius",cen);
}

