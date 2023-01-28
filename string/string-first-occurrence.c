#include<stdio.h>
#include<string.h>
int main()
{
	int j,k,l;
	char s[10];
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	char i;
	printf("Enter the character to be searched :- ");
	scanf("%c",&i);
	printf("\n");
	l = strlen(s);
	for(j=0; j<=l; j++)
	{
		if(s[j] == i)
		{
			k=j;
			printf("Position = %d",k);
			break;	
		}
	}
}
