//wap to copy one string to another string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],s1[10];
	printf("Enter the string ");
	gets(s);
	printf("\n");
	strcpy(s1,s);
	puts(s1);
}
