#include <stdio.h>
void minMax(int *arr, int len, int *min, int *max)
{
    *min = *max = *arr;
    int i;
    for (i = 1; i < len; i++)
    {
        if (*(arr + i) > *max)
            *max = *(arr + i);
        if (*(arr + i) < *min)
            *min = *(arr + i);
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int len = sizeof(a) / sizeof(a[0]);
    int min, max;
    minMax(a, len, &min, &max);
    printf("Minimum value: %d\nMaximum value: %d", min, max);
    return 0;
}