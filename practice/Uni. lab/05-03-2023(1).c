// A program to illustrate address reserved by different data types.

#include <stdio.h>
int main()
{
    int a = 20, b = 50;
    float c = 50.4;
    char d = 'A';
    printf("The base address of a is : %u\n", &a);
    printf("The base address of b is : %u\n", &b);
    printf("The base address of c is : %u\n", &c);
    printf("The base address of d is : %u", &d);
    return 0;
}