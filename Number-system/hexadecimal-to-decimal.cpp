#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char hex[20];
	printf("Enter the hexadecimal number : ");
	gets(hex);
	printf("\n");
	int len,sum=0,i,j=0;
	len=strlen(hex);
	for(i=len-1;i>=0;i--)
	{
		if(hex[i]>= '0' && hex[i] <= '9')
		{
			sum = sum + (hex[i]-48)*pow(16,j);
			j++;
		}
		else if(hex[i]>= 'A' && hex[i] <= 'F')
		{
			sum = sum + (hex[i]-55)*pow(16,j);
			j++;
		}
		else if(hex[i]>= 'a' && hex[i] <= 'f')
		{
			sum = sum + (hex[i]-87)*pow(16,j);
			j++;
		}
	}
	printf("Decimal value for hexadecimal value %s is : %d",hex,sum);
}
