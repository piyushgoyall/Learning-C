#include<stdio.h>
#include<string.h>
int main()
{
	char bi[100],oneco[100];
	printf("Enter the binary number : ");
	gets(bi);
	printf("\n");
	int i,len;
	len=strlen(bi);
	printf("Length : %d\n\n",len);
	for(i=0;i<len;i++)
	{
		if(bi[i]=='1')
		{
			oneco[i]='0';
		}
		else if(bi[i]=='0')
		{
			oneco[i]='1';
		}
		else
		{
			printf("Invalid");
			return 0;
		}
	}
	oneco[len]=bi[len];
	printf("One's complement : %s ",oneco);
	printf("\n\n");
	char twoco[100];
	int carry=1;
	for(i=len-1;i>=0;i--)
	{
		if(oneco[i]=='1' && carry==1)
		{
			twoco[i]='0';
		}
		else if(oneco[i] == '0' && carry == 1)  
        {  
            twoco[i] = '1';  
            carry = 0;  
        }  
        else  
        {  
            twoco[i] = oneco[i];  
        }  
	}
	twoco[len]=oneco[len];
	printf("Two's complement : %s",twoco);
}
