#include <stdio.h>
int main()
{
    int i, j;
    int a[3][2] = {{1}, {5, 2}, {6}};
    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}