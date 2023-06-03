//Round Robin

#include <stdio.h>
#define MAX_PROCESSES 100
int main()
{
    int n, quantum;
    printf("Enter the number of processes to run: ");
    scanf("%d", &n);
    printf("Enter time quantum: ");
    scanf("%d", &quantum);
    int arrival_time[MAX_PROCESSES], burst_time[MAX_PROCESSES], remaining_time[MAX_PROCESSES];
    int completion_time[MAX_PROCESSES], waiting_time[MAX_PROCESSES], response_time[MAX_PROCESSES], turnaround_time[MAX_PROCESSES];
    int time = 0, total_waiting_time = 0, total_response_time = 0, total_turnaround_time = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the arrival time and burst time for P%d: ", i + 1);
        scanf("%d %d", &arrival_time[i], &burst_time[i]);
        remaining_time[i] = burst_time[i];
    }
    while (1)
    {
        int done = 1;
        for (int i = 0; i < n; i++)
        {
            if (remaining_time[i] > 0)
            {
                done = 0;
                if (remaining_time[i] > quantum)
                {
                    time += quantum;
                    remaining_time[i] -= quantum;
                }
                else
                {
                    time += remaining_time[i];
                    waiting_time[i] = time - arrival_time[i] - burst_time[i];
                    response_time[i] = time - arrival_time[i];
                    remaining_time[i] = 0;
                    completion_time[i] = time;
                    turnaround_time[i] = completion_time[i] - arrival_time[i];
                    total_waiting_time += waiting_time[i];
                    total_response_time += response_time[i];
                    total_turnaround_time += turnaround_time[i];
                }
            }
        }

        if (done == 1)
            break;
    }
    printf("Process\tArrival Time\tBurst Time\tCompletion Time\t\tWaiting Time\tResponse Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d\t%d\t\t%d\t\t%d\t\t\t%d\t\t%d\t\t%d\n", i + 1, arrival_time[i], burst_time[i], completion_time[i], waiting_time[i], response_time[i], turnaround_time[i]);
    }
    printf("Average waiting time: %f\n", (float)total_waiting_time / n);
    printf("Average response time: %f\n", (float)total_response_time / n);
    printf("Average turnaround time: %f\n", (float)total_turnaround_time / n);
    return 0;
}
