#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    int small = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("Array's minimum element : %d",small);
    return 0;
}