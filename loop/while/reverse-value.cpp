#include<stdio.h>
int main()
{
	int no,l,reverse=0;
	printf("enter the number ");
	scanf("%d",&no);
	while(no>0)
	{
		l=no%10;
		reverse=(reverse*10)+l;
		no=no/10;
	}
	printf("%d",reverse);
}
