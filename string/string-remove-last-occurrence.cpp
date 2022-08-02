//wap to remove last occurrence of a character from a string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],c;
	int l,i,lo;
	printf("Enter the string :- ");
	gets(s);
	printf("Enter the character to be removed :- ");
	scanf("%c",&c);
	l = strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i] == c)
		{
			lo=i;
		}
	}
	for(i=0; i<l; i++)
	{
		if(i!=lo)
		{
			printf("%c",s[i]);
		}
	}
}
