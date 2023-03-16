// Write a program in C to find length of an array.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element a[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += 1;
    }
    printf("Length of array : %d",count);
    return 0;
}