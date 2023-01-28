#include<stdio.h>
struct student
{
	int rollnum;
	float marks;
}s[2];
int main()
{
	for(int i=0;i<=2;i++)
	{
		printf("Enter the roll number and marks : ");
		scanf("%d %f",&s[i].rollnum,&s[i].marks);
		printf("\n");
		printf("\n");
	}
	for(int i=0;i<=2;i++)
	{
		printf("Roll number = %d\n\nMarks = %f out of 100\n\n",s[i].rollnum,s[i].marks);
	}
}
