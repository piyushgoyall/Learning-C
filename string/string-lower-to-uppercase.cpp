#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter the lowercase string :- ");
	gets(s);
	printf("\n");
	strupr(s);
	puts(s);
}
