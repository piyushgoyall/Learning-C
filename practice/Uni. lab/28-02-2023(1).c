// C program to convert number from Decimal to Binary.

#include <stdio.h>
int main()
{
    int dec;
    printf("Enter a number : ");
    scanf("%d", &dec);
    int rem,i=0; 
    char bin[100];
    while (dec > 0)
    {
        rem = dec % 2;
        dec = dec / 2;
        bin[i]=rem;
        i=i+1;
    }
    for(int k=i-1;k>=0;k--)
	{
		printf("%d",bin[k]);
	}
    return 0;
}