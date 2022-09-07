/*A five-digit number is entered through the keyboard. Write a program to obtain the reversed number 
and to determine whether the original and reversed numbers are equal or not.*/ 
#include<stdio.h>
int main()
{
	int num,rev=0,rem,n;
	printf("Enter the five digit number : ");
	scanf("%d",&num);
	printf("\n");
	n=num;
	rem = n%10; //fifth digit
	rev = rev+rem*10000; 
	n=n/10;
	rem = n%10; //fourth digit
	rev = rev+rem*1000;
	n=n/10;
	rem = n%10; //third digit
	rev = rev+rem*100;
	n=n/10;
	rem = n%10; //second digit
	rev = rev+rem*10;
	n=n/10;
	rem = n%10; //first digit
	rev = rev+rem;
	printf("Reverse = %d",rev);
	printf("\n");
	printf("\n");
	if(rev==num)
	{
		printf("Original and reversed number are equal");
	}
	else
	{
		printf("Original and reverse number are not equal");
	}
}
