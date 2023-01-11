#include<stdio.h>
int main()
{
	char c;
	printf("enter the value of c");
	scanf("%c",&c);
	if(c>='A' && c<='Z')
	{
		printf("upper case alphabet");
	}
	else if (c>='a' && c<='z')
	{
		printf("lower case alphabet");
	}
	else
	{
		printf("%c is not an alphabet",c);
	}
}
