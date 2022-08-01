#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	printf("Enter the string :- ");
	gets(s);
	printf("\n");
	int l,j,i,count,min;
	l = strlen(s);
	min=l;
	for(i=0; i<l; i++)
	{
		count=0;
		for(j=0; j<l; j++)
		{
			if(s[j] == s[i] && i!=j)
			{
				count = count+1;
			}
		}
		if(count<min)
		{
			min = count;
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
		if(count==min)
		{
			printf("Lowest frequency = %c\n",s[i]);
		}
    	}
}
