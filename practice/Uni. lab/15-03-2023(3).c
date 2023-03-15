// Write a program in C to display array element in reverse order.

#include <stdio.h>
int main()
{
    int n, arr[n];
    printf("Enter size of array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element a[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("arr[%d] : %d", i, arr[i]);
        printf("\n");
    }
    return 0;
}