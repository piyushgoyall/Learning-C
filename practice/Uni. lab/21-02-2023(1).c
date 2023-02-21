// String length.

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    int len;
    printf("Enter string one : ");
    gets(s1);
    len = strlen(s1);
    printf("Length of String : %d",len);
    return 0;
}