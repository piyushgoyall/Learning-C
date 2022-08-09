#include<stdio.h>
int main()
{
	int a=10,*ptr;
	ptr=&a;
	printf("Address : %d\n",ptr);
	printf("%d",*ptr);
}
