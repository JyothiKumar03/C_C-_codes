// #include <stdio.h>
// int main()
// {
//     int bt[20], p[20], wt[20], tat[20], i, j, n, total = 0, pos, temp;
//     float avg_wt, avg_tat;
//     printf("Enter number of process:");
//     scanf("%d", &n);
//     printf("\nEnter Burst Time:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("p%d:", i + 1);
//         scanf("%d", &bt[i]);
//         p[i] = i + 1;
//     }
//     // sorting of burst times
//     for (i = 0; i < n; i++)
//     {
//         pos = i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (bt[j] < bt[pos])
//                 pos = j;
//         }
//         temp = bt[i];
//         bt[i] = bt[pos];
//         bt[pos] = temp;
//         temp = p[i];
//         p[i] = p[pos];
//         p[pos] = temp;
//     }
//     wt[0] = 0;
//     for (i = 1; i < n; i++)
//     {
//         wt[i] = 0;
//         for (j = 0; j < i; j++)
//             wt[i] += bt[j];
//         total += wt[i];
//     }
//     avg_wt = (float)total / n;
//     total = 0;
//     printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
//     for (i = 0; i < n; i++)
//     {
//         tat[i] = bt[i] + wt[i];
//         total += tat[i];
//         printf("\np%d\t\t  %d\t\t    %d\t\t\t%d", p[i], bt[i], wt[i], tat[i]);
//     }
//     avg_tat = (float)total / n;
//     printf("\n\nAverage Waiting Time=%f", avg_wt);
//     printf("\nAverage Turnaround Time=%f\n", avg_tat);
// }
#include <stdio.h>
struct PCB
{
    int burst, pid, wait, tat;
};
void line(int x);
void main()
{
    struct PCB p[10], temp;
    int i, n, j = 0, pos, w_total = 0, t_total = 0;
    float w_avg = 0, t_avg = 0;
    printf("SJF algorithm\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter tne burst time of process %d:\n", i + 1);
        scanf("%d", &p[i].burst);
        p[i].pid = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[j].burst < p[i].burst)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    p[0].wait = 0;
    for (i = 1; i < n; i++)
    {
        // p[i].wait = sum;
        // sum += p[i].burst;
        // p[i].tat = p[i].burst + p[i].wait;
        // w_total += p[i].wait;
        // t_total += p[i].tat;
        p[i].wait = 0;
        for (j = 0; j < i; j++)
        {
            p[i].wait += p[j].burst;
        }
        w_total += p[i].wait;
    }
    w_avg = (float)w_total / n;
    line(40);
    printf("PID\tBURST\tWAIT\tTAT\n");
    line(40);
    for (i = 0; i < n; i++)
    {
        p[i].tat = p[i].burst + p[i].wait;
        t_total += p[i].tat;
        printf("%d\t%d\t%d\t%d\n", p[i].pid, p[i].burst, p[i].wait, p[i].tat);
    }
    line(40);
    // w_avg = (float)w_total / n;
    t_avg = (float)t_total / n;
    printf("total tat :%d\n", t_total);
    printf("avg tat :%f\n", t_avg);
    printf("total wait time :%d\n", w_total);
    printf("avg wait time :%f", w_avg);
}
void line(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("-");
    }
    printf("\n");
}