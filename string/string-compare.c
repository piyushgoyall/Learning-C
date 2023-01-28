#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	printf("Enter String-1 :- ");
	gets(s1);
	printf("Enter String-2 :- ");
	gets(s2);
	printf("\n");
	if(strcmp(s1,s2) == 0)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are not equal");
	}
}
