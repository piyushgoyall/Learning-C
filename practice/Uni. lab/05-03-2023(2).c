// Pointer declaration.

#include <stdio.h>
int main()
{
    int v = 10, *p;
    p = &v;
    printf("Address of v = %u\n", &v);
    printf("Address of v = %u\n", p);
    printf("Value of v = %d\n", v);
    printf("Value of v = %d\n", *p);
    printf("Value of p =%u", &p);
    return 0;
}