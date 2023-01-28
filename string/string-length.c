//wap to find length of a string 
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int l;
	printf("Enter the string ");
	gets(s);
	l=strlen(s);
	printf("Length of string: %d",l);
}

