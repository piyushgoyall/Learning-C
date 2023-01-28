#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int l,vowel=0,consonant=0;
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	l=strlen(s);
	for(int i=0; i<=l; i++)
	{
		if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
		{
			if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			{
				vowel = vowel+1;
			}
			else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			{
				vowel = vowel+1;
			}
			else
			{
				consonant = consonant+1;
			}
		}
	}
	printf("Total vowels = %d\n",vowel);
	printf("Total consonants = %d",consonant);
}
