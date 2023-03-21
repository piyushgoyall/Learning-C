// array elements sum using pointer.

#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int sum = 0, *p;
    for (p = &a[0]; p <= &a[4]; p++)
    {
        sum += *p;
    }
    printf("Sum : %d", sum);
    return 0;
}




