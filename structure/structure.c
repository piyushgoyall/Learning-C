#include<stdio.h>
struct student
{
	int roll_num;
	float marks;
}s;
int main()
{
	int roll_num;
	float marks;
	printf("Enter the roll number and marks :  ");
	scanf("%d %f",&s.roll_num,&s.marks);
	printf("\n");
	printf("%d %f",s.roll_num,s.marks);
}
