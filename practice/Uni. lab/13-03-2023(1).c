// Change value of variable using pointer.

#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr = &num;
    printf("value of num: %d\n", num);
    printf("value of num: (using pointer): %d\n", *ptr);
    *ptr = 20;
    printf("value of num: %d\n", num);
    printf("value of num (using pointer): %d\n", *ptr);
    return 0;
}
