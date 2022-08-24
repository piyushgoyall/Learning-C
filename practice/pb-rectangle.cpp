/*Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its perimeter.*/
#include<stdio.h>
int main()
{
	int l,b,per,area;
	printf("Enter the length : ");
	scanf("%d",&l);
	printf("\n");
	printf("Enter the breadth : ");
	scanf("%d",&b);
	printf("\n");
	per= 2*(l+b);
	printf("Perimeter : %d",per);
	printf("\n");
	printf("\n");
	area= l*b;
	printf("Area : %d",area);
	printf("\n");
	printf("\n");
	if(area>per)
	{
		printf("Area is greater than perimeter");
	}
	else
	{
		printf("Perimeter is greater than area");;
	}
}
