// WAP in C to copy one array element into another array.

#include <stdio.h>
int main()
{
    int n, arr[n];
    printf("Enter size of array : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int arrt[n];
    for (int i = 0; i < n; i++)
    {
        arrt[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("Element arr[%d] : %d", i, arr[i]);
        printf("\n");
    }
    return 0;
}