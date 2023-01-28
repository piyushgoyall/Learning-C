#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter the uppercase string :- ");
	gets(s);
	printf("\n");
	strlwr(s);
	puts(s);
}
