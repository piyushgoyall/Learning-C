#include <stdio.h>
int main()
{
    int number = 50;
    int *p;
    p = &number;
    printf("Address of p = %u", p);
    p = p - 1;
    printf("\nAfter decrement:");
    printf("\nAddress of p = %u \n", p);
    return 0;
}