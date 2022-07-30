#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],ss[10];
	printf("Enter the string ");
	gets(s);
	printf("\n");
	strcpy(ss,s);
	strrev(s);
	if(strcmp(s,ss)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a palindrom");
	}
	
}
