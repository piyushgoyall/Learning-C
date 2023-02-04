#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("Enter the string :- ");
	gets(a);
	printf("\n");
	strcpy(b,a);
	puts(b);
}
