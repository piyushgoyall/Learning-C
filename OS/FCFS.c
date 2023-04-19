// WAP to calculate the average waiting time in first come first serve type process.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numebr of processes : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the burst time for process P%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    int sum = 0, b[n];
    b[0] = 0;
    for (int i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", b[i]);
        sum = sum + b[i];
    }
    printf("\n%d", sum);
    printf("\nAverage waiting time : %d", (sum / n));
    return 0;
}
