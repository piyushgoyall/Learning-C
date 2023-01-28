#include<stdio.h>
union student
{
	int roll_num;
	float marks;
}s[2];
int main()
{
	for(int i=0;i<=2;i++)
	{
		printf("Enter the roll number : ");
		scanf("%d",&s[i].roll_num);
		printf("\n");
		printf("Enter the marks : ");
		scanf("%f",&s[i].marks);
		printf("\n");
		printf("\n");
	}
	for(int i=0;i<=2;i++)
	{
		printf("Roll number = %d \n\nMarks = %f\n\n",s[i].roll_num,s[i].marks);
	}
}
