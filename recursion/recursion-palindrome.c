#include<stdio.h>
int reverse(int n)
{
	int static rev =0;
	if(n>0)
	{
		rev = rev*10+(n%10);
		reverse(n/10);
	}
	else
	{
		return rev;
	}
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("\n");
	int d = reverse(n);
	printf("Reverse of number : %d",d);
	printf("\n");
	printf("\n");
	if(d==n)
	{
		printf("Palindrome number");
	}
	else
	{
		printf("Not a palindrome number");
	}
}
