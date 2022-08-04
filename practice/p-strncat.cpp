#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("Enter the srting-1 :- ");
	gets(a);
	printf("\n");
	printf("Enter the string-2 :- ");
	gets(b);
	printf("\n");
	strncat(a,b,3);
	puts(a);
}
