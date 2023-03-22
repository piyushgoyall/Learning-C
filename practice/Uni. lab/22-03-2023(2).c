#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter rows and columns : ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The given 2-D array is : ");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}