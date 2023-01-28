#include<stdio.h>
#include<string.h>
int main()
{
	char bi[100],co[100];
	printf("Enter the binary numebr : ");
	gets(bi);
	printf("\n");
	int i,len;
	len=strlen(bi);
	printf("Length = %d",len);
	printf("\n\n");
	for(i=0;i<len;i++)
	{
		if(bi[i]=='1')
		{
			co[i]='0';
		}
		else if(bi[i]=='0')
		{
			co[i]='1';
		}
		else
		{
			printf("Invalid");
			return 0;
		}
	}
	co[len]=bi[len];
	printf("One's complement : %s ",co);
}
