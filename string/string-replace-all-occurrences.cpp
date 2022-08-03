//wap to replace all occurrences of a character with another in a string
#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	int flag=1;
	char s[10];
	char c;
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	printf("Enter the element to be replaced :- ");
	scanf("%c",&c);
	printf("\n");
	l = strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i]==c)
		{
			printf("k");
		}
		else
		{
			printf("%c",s[i]);	
		}		
	}
}
