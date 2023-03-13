// Pointer swap by reference.

#include <stdio.h>
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

int main()
{
    int a = 10, b = 20;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    swap(&a, &b);
    return 0;
}