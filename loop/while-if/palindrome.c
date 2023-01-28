#include<stdio.h>
int main()
{
	int no,l,reverse=0,original;
	printf("enter the number ");
	scanf("%d",&no);
	original = no;
	while(no>0)
	{
		l=no%10;
		reverse=(reverse*10)+l;
		no=no/10;
	}
	
	if(original==reverse)
	{
		printf("%d is a plaindrom number",original);
	}
	else
	{
		printf("%d is not a plaindrom number",original);
	}
}
