// Write a program to calculate the area and the circumference of a circle by using radius as the input provided by the user.

#include<stdio.h>
int main()
{
    int rad;
    printf("Enter radius : ");
    scanf("%d",&rad);
    float area = 3.14*rad*rad;
    float cir = 2*3.14*rad;
    printf("Area = %f",area);
    printf("\nCircumference = %f",cir);
}