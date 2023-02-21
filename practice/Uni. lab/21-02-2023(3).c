// String copy

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter string one : ");
    gets(str1);
    strcpy(str2,str1);
    printf("Copied string : %s",str2);
    return 0;
}