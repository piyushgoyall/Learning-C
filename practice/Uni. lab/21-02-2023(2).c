// String concatenation.

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],s3[100];
    int len;
    printf("Enter string one : ");
    gets(s1);
    printf("Enter string two : ");
    gets(s2);
    strcpy(s3,s1);
    strcat(s3,s2);
    printf("Concated String : %s",s3);
    return 0;
}