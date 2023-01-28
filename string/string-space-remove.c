//wap to trim leading white space characters ina string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	int l,i;
	l = strlen(s);
    	for(i=0; i<l; i++)
    	{
    		if(s[i] != ' ')
    		{
    			printf("%c",s[i]);
		}
	}
}
