//wap to replace all occurrences of a character with another in a string
#include<stdio.h>
#include<string.h>
int main()
{
	int repeat[0],r=0,i,j,l;
	int flag=1;
	char s[10];
	printf("Enter the string :- ");
	gets(s);
	l = strlen(s);
	for(i=0; i<l; i++)
	{
		flag=1;
		for(j=0;j<l;j++)
		{
			if(s[i]==s[j] && i!=j)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("%c",s[i]);
		}
		else
		{
			printf("m");
		}		
	}
}
