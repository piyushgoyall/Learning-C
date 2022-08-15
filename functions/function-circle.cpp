//wap to enter the radius and find the diameter, area and circumference of a circle using functions
#include<stdio.h>
float diameter(float radius)
{
	float c = 2*radius;
	return c;
}
float area(float radius)
{
	float d = (22*radius*radius)/7;
	return d;
}
float circumference(float radius)
{
	float e = (2*22*radius)/7;
	return e;
}
int main()
{
	float radius;
	printf("Enter the radius : ");
	scanf("%f",&radius);
	printf("\n");
	printf("Diameter = %.2f\n\n",diameter(radius));
	printf("Area = %.2f\n\n",area(radius));
	printf("Circumference = %.2f",circumference(radius));
}
