#include<stdio.h>
#include<string.h>
int main()
{
	char word[20],temp[20],search[10],l,i,j=0,k,flag=0,count=0;	
	printf("Enter the string:- ");
	gets(word);
	printf("\n");
	printf("Enter the word to be searched :- ");
	gets(search);
	printf("\n");
	strcat(word," ");
	i=0;
	while(word[i]>'\0')
	{
		if(word[i]==' ')
		{
			puts(temp);
			if(strcmp(temp,search)==0)
			{		
				flag=1;
				count=count+1;
			}
			for(k=0;temp[k]!='\0';k++)
			{
				temp[k]='\0';
			}
			j=0;
			i=i+1;
		}
		else
		{
			temp[j] = word[i];
			j = j+1;
			i = i+1;
		}
	}
	printf("\n");
	printf("%d",count);
}
