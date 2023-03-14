// Write a program to take two input from the user and store the address of variable into pointer and find the sum of the numbers using pointer.

#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int *p1 = &n1, *p2 = &n2;
    printf("SUM = %d", (*p1 + *p2));
    return 0;
}
