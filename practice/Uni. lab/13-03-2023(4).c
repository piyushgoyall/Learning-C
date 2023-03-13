#include <stdio.h>
int main()
{
    int *p; // wild pointer
    printf("%d", *p);
    return 0;
}