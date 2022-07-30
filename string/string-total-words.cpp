#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter the string :- ");
	gets(s);
	int l= strlen(s),words=1;
	for(int i=0; i<=l; i++)
	{
		if(s[i]==' ')
		{
			words = words + 1;
		}
	}
	printf("Total words = %d",words);
	

	
}
