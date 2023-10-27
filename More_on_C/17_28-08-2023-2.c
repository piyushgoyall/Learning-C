// INLINE FUNCTION
// Write a program using inline function to calculate sum of array

#include <stdio.h>
static inline void arrsum(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arrsum(arr,n);
    return 0;
}