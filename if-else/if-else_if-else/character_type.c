#include<stdio.h>
int main()
{
	char c;
	printf("enter the value of c");
	scanf("%c",&c);
	if(c>='A' && c<='Z')
	{
		printf("%c is an alphabet",c);
	}
	else if(c>='a' && c<='z')
	{
		printf("%c is an alphabet",c);
	}
	else if(c>='0' && c<='9')
	{
		printf("%c is a number",c);
	}
	else
	{
	printf("%c is a splecial character",c);
	}
}
