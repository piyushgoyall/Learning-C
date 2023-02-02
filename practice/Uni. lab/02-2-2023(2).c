// do while (table)

#include <stdio.h>
int main()
{
    int n;
    printf("ENter a number : ");
    scanf("%d", &n);
    int i = 1, pro = 1;
    do
    {
        pro = n * i;
        printf("%d * %d = %d\n", n, i, pro);
        i++;
    } while (i <= 10);
    return 0;
}