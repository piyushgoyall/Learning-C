//wap to find total number of alphabets, digits or special character in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter the string :- ");
	gets(s);
	int l=strlen(s),uc=0,lc=0,sc=0,digit=0;
	for(int i=0;i<=l; i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			uc = uc+1;
		}
		else if(s[i]>='a' && s[i]<='z')
		{
			lc = lc+1;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			digit = digit+1;
		}
		else
		{
			sc= sc+1;
		}
	}
	printf("Total uppercase alphabets :- %d\n",uc);
    	printf("Total lowercase alphabets :- %d\n",lc);
    	printf("Total digits :- %d\n",digit);
    	printf("Total special characters :- %d\n",sc);
}
