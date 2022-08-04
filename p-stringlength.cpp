#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],age[5];
	printf("Enter your name :- ");
	gets(name);
	printf("\n");
	printf("Enter your age :- ");
	gets(age);
	printf("\n");
	int l1,l2;
	l1 = strlen(name);
	l2 = strlen(age);
	printf("Length of string containing name = %d",l1);
	printf("\n");
	printf("Length of string containing age = %d",l2);
}
