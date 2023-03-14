// Double pointer

#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    int **pp;
    p = &a;
    pp = &p;
    printf("Address of a: %x\n", p);
    printf("Address of p: %x\n", pp);
    printf("value of p: %d\n", *p);
    printf("value of pp: %d\n", **pp);
    return 0;
}