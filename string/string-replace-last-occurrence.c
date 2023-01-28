//wap to replace last occurance of a character with another in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],c;
	int l,i,lo;
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	printf("Enter the character to be replaced :- ");
	scanf("%c",&c);
	printf("\n");
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
		else
		{
			printf("m");
		}
	}
}
