//wap to swap first and last digits of any number
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int len,k;
	printf("Enter the number : ");
	gets(a);
	printf("\n");
	len=strlen(a);
	strcpy(b,a);
	if(a[0])
	{
		b[len-1]=a[0];
	}
	if(a[len-1])
	{
		b[0]=a[len-1];
	}
	b[len]=a[len];
	printf("Number after swapping first and last digit : ");
	puts(b);
}
