/*Write a program to print the multiplication table of the number entered by the user. 
The table should get displayed in the following form.
29 * 1 = 29
29 * 2 = 58...*/
#include<stdio.h>
int main()
{
	int num,table=1,i;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=10;i++)
	{
		table=num*i;
		printf("%d*%d = %d\n",num,i,table);
	}
}
