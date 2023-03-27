// malloc

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *p;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else
    {
        printf("Enter elements of array:\n");
        for (i = 0; i < n; ++i)
        {
            scanf("%d", &*(p + i));
        }
        printf("Elements of array are : ");
        for (i = 0; i < n; i++)
        {
            printf("%d  ", *(p + i));
        }
    }
    return 0;
}