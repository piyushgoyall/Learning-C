// Write a program in C to print n natural numbers using recursion.

#include <stdio.h>
int series(int start, int end)
{
    if (start <= end)
    {
        printf("%d\t", start);
        series(start + 1, end);
    }
}
int main()
{
    int s, e;
    printf("Enter the starting and ending value : ");
    scanf("%d %d", &s, &e);
    series(s, e);
    return 0;
}
