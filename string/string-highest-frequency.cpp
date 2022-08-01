#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	int l,count,j,max,i;
	l = strlen(s);
	max = 0;
	for(i=0; i<l; i++)
	{
		count=0;
		for(j=0; j<l; j++)
		{
			if(s[j] == s[i] && i!=j )
			{
				count = count+1;
			}
		}
		if(count>max)
		{
			max = count;
		}
    	}
    	for(i=0; i<l; i++)
	{
		count=0;
		for(j=0; j<l; j++)
		{
			if(s[j] == s[i] && i!=j )
			{
				count = count+1;
			}
		}
		if(count==max)
		{
			printf("Highest frequency = %c\n",s[i]);
		}
    	}
}
