#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("Enter the string :- ");
	gets(a);
	printf("\n");
	strncpy(b,a,5);
	puts(b);
}
