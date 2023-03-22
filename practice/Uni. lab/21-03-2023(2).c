// array elements sum using pointer.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value at a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    int sum = 0, *p;
    for (p = &a[0]; p <= &a[n]; p++)
    {
        sum += *p;
    }
    printf("Sum : %d", sum);
    return 0;
}



