// String upper to lower case.

#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char upr[10];
    printf("Enter the upper case string: ");
    gets(upr);
    strlwr(upr);
    printf("\nThe lowercase string is: %s", upr);
    return 0;
}