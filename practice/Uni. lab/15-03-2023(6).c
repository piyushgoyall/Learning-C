// Printing array memory address


#include <stdio.h>
int main()
{
    int a[] = {11, 12, 13, 14, 15};
    for (int i = 0; i < 5; i++)
    {
        printf("\nAddress of %d is a[%d] : %d", a[i], i, &a[i]);
    }
    return 0;
}