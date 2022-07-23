//wap to enter any number and cal. product of it's digits
#include<stdio.h>
int main()
{
	int no,product=1,l;
	printf("enter the number ");
	scanf("%d",&no);
	while(no>0)
	{
		l=no%10;
		product=product*l;
		no=no/10;
	}
printf("product= %d",product);
}
