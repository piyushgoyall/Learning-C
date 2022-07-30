//wap to concatenate two strings
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	printf("Enter String-1 ");
	gets(s1);
	printf("Enter String-2 ");
	gets(s2);
	printf("\n");
	strcat(s1,s2);
	puts(s1);
}
