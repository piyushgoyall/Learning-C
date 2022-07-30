#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	int l=strlen(s);
	for(int i=0;i<=l; i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			s[i] = s[i] + 32;
		}
		else
		{
			if(s[i]>='a' && s[i]<='z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	puts(s);
}
