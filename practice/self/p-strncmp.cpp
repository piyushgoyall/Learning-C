#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	printf("Enter String-1 :- ");
	gets(a);
	printf("\n");
	printf("Enter String-2 :- ");
	gets(b);
	printf("\n");
	if(strncmp(a,b,5) == 0)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are not equal");
	}
}
