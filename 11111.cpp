#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20],c;
	printf("Enter the string-1 :- ");
	gets(a);
	printf("\n");
	printf("Enter the string-2 :- ");
	gets(b);
	printf("\n");
	strstr(a,b);
}
