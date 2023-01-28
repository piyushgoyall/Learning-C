#include<stdio.h>
int main()
{
	int var,*ptr,**pptr;
	var = 3000;
	ptr = &var;
	pptr = &ptr;
	printf("Address : %d\n",ptr);
	printf("%d\n",*ptr);
	printf("Pointer address : %d\n",pptr);
	printf("%d\n",**pptr);
}
