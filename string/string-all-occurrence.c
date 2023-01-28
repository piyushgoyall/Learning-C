//wap to search all occurrences of a character in given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	char i;
	printf("Enter the character to be searched :- ");
	scanf("%c",&i);
	int l,k,j;
	l = strlen(s);
	for(j=0; j<=l; j++)
	{
		if(s[j] == i)
		{
			k=j;
			printf("Position = %d\t",k);
		}
	}
}
