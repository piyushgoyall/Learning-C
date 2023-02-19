// Print the following pattern for r = 5.

// * * * * * * * *
// *             *
// *             *
// *             *
// * * * * * * * *

#include <stdio.h>
int main()
{
    int r;
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < (2 * r) - 2; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == (2 * r) - 3)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}