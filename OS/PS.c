// WAP to calculate average time in priority scheduling.


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numebr of processes : ");
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the burst time for process P%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the priority of process P%d: ", i + 1);
        scanf("%d", &b[i]);
    }
    int c[n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[j] == i)
            {
                c[i - 1] = a[j];
            }
        }
    }
    int d[n];
    float sum = 0;
    d[0] = 0;
    for (int i = 1; i < n; i++)
    {
        d[i] = d[i - 1] + c[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%d  ", d[i]);
        sum = sum + d[i];
    }
    printf("\nProcess\tBurst time\tPriority\n");
    for (int i = 1; i <= n; i++)
    {
        printf("P%d\t%d\t\t%d", i, a[i - 1], b[i - 1]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Waiting time of P%d : %d", i + 1, d[i]);
        printf("\n");
    }
    printf("\n");
    printf("Therefore average waiting time : %f", (sum / n));
}
