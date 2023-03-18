// Prime series.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
