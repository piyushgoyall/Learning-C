/*Write a program to find the octal equivalent of the entered number. */
#include<stdio.h>
int main()
{
	int num,rem,oct[8],i=0,k;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\n");
	while(num>0)
	{
		rem=num%8;
		num=num/8;
		oct[i]=rem;
		i++;
	}
	printf("Octal for the entered decimal number : ");
	for(k=i-1;k>=0;k--)
	{
		printf("%d",oct[k]);
	}
}
